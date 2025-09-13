#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[50], gender[10];
    int age, statechioce, districtchoice, placechoice, clinicchoice;
    int treatmentchoice, doctorchoice, seat, rating;
    
    srand(time(0));
    
    char *states[] = {"Kerala", "Tamilnadu", "Karnataka", "Goa"};
    
    char *districts[4][4] = {{"Kozhikode", "Malappuram", "Thrissur", "Kannur"},
    {"Chennai", "Coimbatore", "Madurai", "Trichy"},
    {"Bengaluru", "Mysuru", "Mangaluru", "Hubli"},
    {"Panaji", "Margao", "Vasco", "Mapusa"}};
    
    char *places[4][4][4] = {{{"Koyilandy", "Nadakkavu", "Mavoor", "Feroke"},
    {"Kottakal", "Valachery", "Perinthalmana", "Nilamboor"},
    {"Guruvayur", "Ollur", "Chalakudy", "Vadakkumnathan"},
    {"Thalassery", "Payyannur", "Mattannur", "Iritty"}},
    
      {{"T. Nagar", "Anna Nagar", "Velachery", "Mylapore"},
      {"Gandhipuram", "RS Puram", "Peelamedu", "Saibaba Clony"},
      {"K. Pudur", "Thiruparankundram", "Anna Nagar", "Tallakulam"},
      {"Srirangam", "Woraiyur", "Ponmalai", "Thillai Nagar"}},
      
      {{"Whitefield", "Jayanagar", "Indiranagar", "Koramangala"},
      {"Kuvempu Nagar", "Saraswathipuram", "Jayalakshmipuram", "Bannur Road"},
      {"Hampankatta", "Surathkal", "Ullal", "Kadri"},
      {"Vidyanagar", "Gokul Road", "Navanagar", "Old Hubli"}},
      
      {{"Altinho", "Miramar", "Fontainhas", "Dona Paula"},
      {"Borda", "Fatorda", "Navelim", "Gogol"},
      {"Dabolim", "Chicalim", "Baina", "Sada"},
      {"Assagao", "Siolim", "Anjuna", "Calangute"}}};
      
      char *clinics[] = {"Drango Dental Care", "Bright Tooth Clinic", "Smile Hospital", "White Pearl Dental"};
      char *treatments[] = {"Root Canal", "Tooth Extraction", "Braces Fixing", "Surgery"};
      
      char *doctors[4][2] = {{" Dr. Malik Hussain (Root Canal Specialist)", "Dr. Meera (Endodontist)"},
        {"Dr. Ravi Kumar (Oral Surgeon)", "Dr. Lakshmi (Dental Surgeon)"},
        {"Dr. Samuel (Orthodontist)", "Dr. Fathima (Braces Specialist)"},
        {"Dr. Sahal (Maxillofacial Surgeon)", "Dr. Sara (Senior Dental Surgeon)"}};
        
        printf("===============================================================\n");
        printf("🏥 Welcome to Dental Booking System 🏥\n");
        
        printf("================================================================\n");
        
        printf("Enter your name:");
        scanf("%[^\n]", name);
        
        printf("Enter your age:");
        scanf("%d", &age);
        
        printf("Enter your gender (Male 👨 /Female 👩 ):");
        scanf("%s", gender);
        
        printf("Enter your State:\n");
        for(int i=0;i<4;i++)
        { printf("%d.%s\n", i+1,states[i]);}
          printf(" Choice:");
          scanf("%d", &statechioce);
        
        printf("Enter your District:\n");
        for(int i=0;i<4;i++)
        { printf("%d.%s\n",i+1,districts[statechioce-1][i]);}
          printf("Choice:");
          scanf("%d", &districtchoice);
          
        printf("Enter your Place:\n");
        for(int i=0;i<4;i++)
        { printf("%d.%s\n",i+1,places[statechioce-1][districtchoice-1][i]);}
          printf("Choice:");
          scanf("%d", &placechoice);
          
          printf("Available Dental Clinics in your area:\n");
          for(int i=0;i<4;i++)
          { printf("%d.%s\n",i+1,clinics[i]);}
            printf("Choice:");
            scanf("%d", &clinicchoice);
            
        printf("Enter your Treatment:\n");
        for(int i=0;i<4;i++)
        { printf("%d.%s\n",i+1,treatments[i]);}
          printf("Choice:");
          scanf("%d", &treatmentchoice);
          
        printf("Available Doctors:\n");
        for(int i=0;i<2;i++)
        { printf("%d.%s\n",i+1,doctors[treatmentchoice-1][i]);}
          printf("Choice:");
          scanf("%d", &doctorchoice);
          
        seat = (rand() % 30) + 1;
        
        printf("🧾------------------ Booking Summary ------------------🧾\n");
        printf("Patient Name: %s\n", name);
        printf("Age: %d | Gender: %s\n", age, gender);
        printf("State: %s\n", states[statechioce-1]);
        printf("District: %s\n", districts[statechioce-1][districtchoice-1]);
        printf("Place: %s\n", places[statechioce-1][districtchoice-1][placechoice-1]);
        printf("Clinic Selected: %s\n", clinics[clinicchoice-1]);
        printf("Treatment Type: %s\n", treatments[treatmentchoice-1]);
        printf("Doctor Selected: %s\n", doctors[treatmentchoice-1][doctorchoice-1]);
        printf("Appointment Seat Number: %d\n", seat);
        printf("⏰ Time Slot: 10:00 AM - 03:00 PM\n");
        
        printf("-----------------------------------------------------------\n");
        
        printf("Please rate our service (1-5 stars):");
        scanf("%d", &rating);
        printf("⭐ Thank you! You rated us %d stars.\n", rating);
        
        printf(" ✅  Your appointment is confirmed! See you soon.😊 \n");
        
        return 0;}
      
      
      

