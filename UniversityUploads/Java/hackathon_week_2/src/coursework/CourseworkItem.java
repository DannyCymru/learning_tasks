/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package coursework;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import static java.lang.System.out;
import java.util.ArrayList;
import javax.swing.JOptionPane;
/**
 *
 * @author Danny
 */
public class CourseworkItem extends CommonCode {
     public ArrayList<Note> coursworkItem = new ArrayList<>();
     public int max = 0;
     
     public String addCourse() {
         String newItem;
         newItem = JOptionPane.showInputDialog("Insert Course");
         
         try {
             FileWriter fw = new FileWriter("Courses.txt", true);
             PrintWriter pw = new PrintWriter(fw);
             
             pw.println(newItem);
             pw.close();  
         } catch (IOException e) {
             out.println("Error");
         }
         return newItem;
     }
     
     public void deleteCourse(String courseName) {
        String inputFileName = "Courses.txt";
        String outputFileName = "tempFile.txt";
        try {
            File inputFile = new File(inputFileName);
            File outputFile = new File(outputFileName);
   
        try (BufferedReader reader = new BufferedReader(new FileReader(inputFile));
             BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile))) {
        
        String line = null;
        while ((line = reader.readLine()) != null) {
            if (!line.equals(courseName)) {
                writer.write(line);
                writer.newLine();
            }
        }
    }
    if (inputFile.delete()) {
        
        if (!outputFile.renameTo(inputFile)) {
                throw new IOException("Could not rename " + outputFileName + " to " + inputFileName);
                }   
    } else {
            throw new IOException("Could not delete original input file " + inputFileName);
      }
        } catch (IOException ex) {
            ex.printStackTrace();
         }
     }
     
        public String amendCourse() {
            String amendedName = "";
         
         return amendedName;
     }
}
