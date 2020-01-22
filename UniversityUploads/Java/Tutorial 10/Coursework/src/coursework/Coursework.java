/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package coursework;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import static java.lang.System.out;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JToolBar;

/**
 *
 * @author Danny
 */
public class Coursework extends JFrame implements ActionListener, KeyListener {
    
    JPanel pnl = new JPanel(new BorderLayout());
    JTextArea txtNewNote = new JTextArea();
    JTextArea txtDisplayNotes = new JTextArea();
    ArrayList<String> note = new ArrayList<>();
    ArrayList<String> course = new ArrayList<>();
    
    JComboBox courseList = new JComboBox();
    String crse = "";
    AllNotes allNotes = new AllNotes();
    
    JTextField search = new JTextField();
    CourseworkItem courseworkItem = new CourseworkItem();
    
    public static void main(String[] args) {
        // This is required for the coursework.
        JOptionPane.showMessageDialog(null, "Danny Roberts");
        Coursework prg = new Coursework();
    }

    // Using MVC
    public Coursework() {
        model();
        view();
        controller();
    }
    
    @Override
    public void actionPerformed(ActionEvent ae) {
        if ("NewNote".equals(ae.getActionCommand())){
            addNote(txtNewNote.getText());
            txtNewNote.setText("");
        }
        if ("Close".equals(ae.getActionCommand())){
          
        }
        if ("Exit".equals(ae.getActionCommand())){
            System.exit(0);
        }
        
        if ("Course".equals(ae.getActionCommand())) {
            crse = courseList.getSelectedItem().toString();
            System.out.println(crse);
        }
        
        if ("addCourse".equals(ae.getActionCommand())) {
            
            courseList.addItem(courseworkItem.addCourse());
        }
        
        if ("deleteCourse".equals(ae.getActionCommand())) {
           courseworkItem.deleteCourse(String.valueOf(courseList.getSelectedItem()));
           courseList.removeItem(courseList.getSelectedItem());
        }
        
        if ("amendCourse".equals(ae.getActionCommand())) {
        }
        
        if ("SearchKeyword".equals(ae.getActionCommand())){
            String lyst = allNotes.searchAllNotesByKeyword("", 0, search.getText());
            txtDisplayNotes.setText(lyst);
        }
     
    }

    @Override
    public void keyTyped(KeyEvent e) {
        System.out.println("keyTyped not coded yet.");
    }

    @Override
    public void keyPressed(KeyEvent e) {
        System.out.println("keyPressed not coded yet.");
    }

    @Override
    public void keyReleased(KeyEvent e) {
        System.out.println("keyReleased not coded yet.");
    }
    
    private void model() {
        
        
        showAllCrse();
        crse = course.get(0);
        
        /*// Take these out AFTER you have created the file.
        Note nt = new Note();
        nt.setNoteID(1);
        nt.setDayte(getDateAndTime());
        nt.setCourse(crse);
        nt.setNote("Arrays are of fixed length and are inflexible.");
        allNotes.addNote(nt.getNoteID(), nt.getCourse(), nt.getNote());

        // Take these out AFTER you have created the file.
        nt = new Note();
        nt.setNoteID(2);
        nt.setDayte(getDateAndTime());
        nt.setCourse(crse);
        nt.setNote("ArraysList can be added to and items can be deleted.");
        allNotes.addNote(nt.getNoteID(), nt.getCourse(), nt.getNote());
        */
    }

    private void view() {
        Font fnt = new Font("Georgia", Font.PLAIN, 24);

        JMenuBar menuBar = new JMenuBar();
        JMenu note = new JMenu();

        note = new JMenu("Note");
        note.setToolTipText("Note tasks");
        note.setFont(fnt);

        note.add(makeMenuItem("New", "NewNote", "Create a new note.", fnt));
        note.addSeparator();
        note.add(makeMenuItem("Close", "Close", "Clear the current note.", fnt));
        
        menuBar.add(note);
        menuBar.add(makeMenuItem("Exit", "Exit", "Close this program", fnt));
                
        for (String crse : course) {
            courseList.addItem(crse);
        }
        
        courseList.setFont(fnt);
        courseList.setMaximumSize(courseList.getPreferredSize());
        courseList.addActionListener(this);
        courseList.setActionCommand("Course");
        menuBar.add(courseList);
        
        JMenu cOptions = new JMenu();
        
        cOptions = new JMenu("Courses");
        cOptions.setToolTipText("Make changes to course list");
        cOptions.setFont(fnt);
        
        cOptions.add(makeMenuItem("Add Course", "addCourse", "Add Course to the drop down list.", fnt));
        cOptions.addSeparator();
        cOptions.add(makeMenuItem("Amend Course", "amendCourse", "Amend current Course in the drop down list.", fnt));
        cOptions.addSeparator();
        cOptions.add(makeMenuItem("Delete Course", "deleteCourse", "Delete current Course in the drop down list.", fnt));

        menuBar.add(cOptions);
        this.setJMenuBar(menuBar);

        JToolBar toolBar = new JToolBar();
        // Setting up the ButtonBar
        JButton button = null;
        button = makeButton("Create", "NewNote",
                "Create a new note.",
                "New");
        toolBar.add(button);
        button = makeButton("closed door", "Close",
                "Close this note.",
                "Close");
        toolBar.add(button);
        toolBar.addSeparator();
        button = makeButton("exit", "Exit",
                "Exit from this program.",
                "Exit");
        
        toolBar.add(button);
        /*button = makeButton("display", "display",
                "display",
                "display");
        toolBar.add(button);*/
        
        toolBar.addSeparator();// This forces anything after it to the right.
        toolBar.add(Box.createHorizontalGlue());
        search.setMaximumSize(new Dimension(6900, 30));
        search.setFont(fnt);
        toolBar.add(search);
        toolBar.addSeparator();
        button = makeButton("search", "SearchKeyword","Search for this text.","Search");
        toolBar.add(button);
        
        add(toolBar, BorderLayout.NORTH);
        
        JPanel pnlWest = new JPanel();
        pnlWest.setLayout(new BoxLayout(pnlWest, BoxLayout.Y_AXIS));
        pnlWest.setBorder(BorderFactory.createLineBorder(Color.black));
        
        txtNewNote.setFont(fnt);
        pnlWest.add(txtNewNote);

        JButton btnAddNote = new JButton("Add note");
        btnAddNote.setActionCommand("NewNote");
        btnAddNote.addActionListener(this);
        pnlWest.add(btnAddNote);
        
        add(pnlWest, BorderLayout.WEST);

        JPanel cen = new JPanel();
        cen.setLayout(new BoxLayout(cen, BoxLayout.Y_AXIS));
        cen.setBorder(BorderFactory.createLineBorder(Color.black));
        txtDisplayNotes.setFont(fnt);
        cen.add(txtDisplayNotes);
        
        add(cen, BorderLayout.CENTER);

        setExtendedState(JFrame.MAXIMIZED_BOTH);
        setTitle("Coursework - Danny Roberts");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        setVisible(true);  // Needed to ensure that the items can be seen.
    }


    private void controller() {
        addAllNotes();
    }
    
    protected JMenuItem makeMenuItem(
            String txt,
            String actionCommand,
            String toolTipText,
            Font fnt){
        JMenuItem mnuItem = new JMenuItem();
        mnuItem.setText(txt);
        mnuItem.setActionCommand(actionCommand);
        mnuItem.setToolTipText(toolTipText);
        mnuItem.setFont(fnt);
        mnuItem.addActionListener(this);
        
        return mnuItem;
    }
    
   protected JButton makeButton(
            String imageName,
            String actionCommand,
            String toolTipText,
            String altText) {

        //Create and initialize the button.
        JButton button = new JButton();
        button.setToolTipText(toolTipText);
        button.setActionCommand(actionCommand);
        button.addActionListener(this);

        //Look for the image.
        String imgLocation = System.getProperty("user.dir")
                + "\\icons\\"
                + imageName
                + ".png";

        File fyle = new File(imgLocation);
        if (fyle.exists() && !fyle.isDirectory()) {
            // image found
            Icon img;
            img = new ImageIcon(imgLocation);
            button.setIcon(img);
        } else {

            // image NOT found
            button.setText(altText);
            System.err.println("Resource not found: " + imgLocation);
        }

        return button;
    }

    private void addNote(String text) {
        allNotes.addNote(allNotes.getMaxID(), crse, text);
        addAllNotes();
    }
    
    private void showCrs(String text) {
        course.add(txtNewNote.getText());
        showAllCrse();
    }
    
  
    private String showAllCrse() {
                String allCourses="";
        try {
            FileReader fr = new FileReader("Courses.txt");
            BufferedReader br = new BufferedReader(fr);
        
        String frcourse;
        while ((frcourse = br.readLine()) != null)  {
            course.add(frcourse);
        }
        br.close();
        return allCourses;

        } catch(IOException e) {
            out.println("File Not Found");
        }
        return allCourses;
    }
    
    private void addAllNotes() {
        String txtNotes = "";
        
        for (Note n : allNotes.getAllNotes()) {
            txtNotes += n.getNote() + "\n";
        }
        
        txtDisplayNotes.setText(txtNotes);
    }
    
    private String getDateAndTime() {
        String UK_DATE_FORMAT_NOW = "dd-MM-yyyy HH:mm:ss";
        String ukDateAndTime;
        
        Calendar cal = Calendar.getInstance();
        SimpleDateFormat uksdf = new SimpleDateFormat(UK_DATE_FORMAT_NOW);
        ukDateAndTime = uksdf.format(cal.getTime());
        return ukDateAndTime;
    }

}