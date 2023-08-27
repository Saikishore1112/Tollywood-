#include <stdio.h>

int director();
void rajamouli();
void trivikram();
void boyapati();
void rgv();
void sukumar();

int hero();
void praboss();
void AA();
void pk();
void ntr();
void rc();

void heroine();
void sam();
void rashmika();
void hackde();
void kajal();
void tammanah();

int main()
{
    int i;
    printf("--------------------------------welcome to tollywood data------------------------------------\n");
    printf("                         Note 1.we have data of only tollywood\n                              2.top wise order is not in any order\n                              3.data is limited\n                              4.we dont encourage fan wars\n");
    printf("\nenter 1 to list top directors of tollywood\nenter 2 to list top heroes of tollywood\nenter 3 to list top heroines of tollywood\nyour choice:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:

        printf("\nas you choosen 1 to list top 5 directors of tollywood\n");
        director();
        break;
    case 2:
        printf("\nas you choosen 2 to list top 5 heroes of tollywood\n");
        hero();
        break;
    case 3:
        printf("\nas you choose  3 to list top 5 heroines of tollywood\n");
        heroine();
        break;

    default:
        printf("thank you");
    }
    return 0;
}

int director()
{
    int i;
    printf("\nThe following are the top directors of tollywood\n1. S.S.Rajamouli \n2.Trivikram Srinivas\n3.boyapati srinu\n4.rgv\n5.sukumar\n\nenter the number indicated to them to view particular director\nenter any other number to exit\n\nyourchoice:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("\nas you choosen 1 to view s.s.rajamouli\n\n");
        rajamouli();
        break;
    case 2:
        printf("\nas you choosen 2 to view trivikram srinivas\n\n");
        trivikram();
        break;
    case 3:
        printf("as you choosen 3 to view  boyapati sreenu\n\n");
        boyapati();
        break;
    case 4:
        printf("as you choosen 4 to view rgv\n\n");
        rgv();
        break;
    case 5:
        printf("as you choosen 4 to view sukumar\n\n");
        sukumar();
        break;
    default:
        printf("thank you");
        break;
    }
    return 0;
}
void rajamouli()
{
    int i;
    printf("S.S.Rajamouli:\n\tKoduri Srisaila Sri Rajamouli  born on 10 October 1973, professionally known as S. S. Rajamouli, is an Indian film director and screenwriter who works in Telugu Cinema. \n\tHe is best known for his works in high fantasy, and period films such as Magadheera (2009) featured at the American Fantastic Fest; Eega (2012) winning Most Original Film at the Toronto After Dark Film Festival.\n\tBaahubali: The Beginning (2015) nominated for American Saturn Award for Best Fantasy Film; Baahubali 2: The Conclusion (2017) winning the American Saturn Award for Best International Film, and the Australian Telstra People's Choice Award.");
    printf("\n\nrecent five movies of s.s.rajamouli are:\n1.RRR(not released yet) \n2.Bahubali 2:the conclusion(2017)\n3.Bahubali:the beginning(2015)\n4.eega(2012)\n5.maryadarammana(2010)\n\n");
    printf("enter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","w");
    char rrr[1000]="\nRRR:\n\tA tale of two legendary revolutionaries and their journey far away from home. After their journey they return home to start fighting back against British colonialists in the 1920s.\n\nRelease date: 25 March 2022 (India)\n\nDirector: S. S.Rajamouli\n\nMusic by: M. M. Keeravani\n\nBudget: 400 crores INR\n\nProduced by: D. V. V. Danayya\n\nCast:N. T. Rama Rao,Ram Charan, Ajay Devgn,Alia Bhatt,Spandan,Olivia Morris,Samuthirakani,Alison Doody,Ray Stevenson,Shriya Saran, rajeev kanakala.";
    char bb2[1000]="\nBahubali 2:the conclusion\n\tAfter knowing that his father was brutally killed by Bhallaladeva, Mahendra Baahubali raises an army to defeat him and release his mother from the former's captivity.\n\nRelease date: 28 April 2017 (India)\n\nDirector: S. S. Rajamouli\n\nBox office: est. ₹1,810 crore\n\nBudget: 250 crores INR\n\ncast: Prabhas; Rana Daggubati; Anushka Shetty; Tamannaah; Ramya Krishna; Sathyaraj; Nassar; Subbaraju\n";
    char bb1[1000]="\nBahubali:the beginning\n\tIn the kingdom of Mahishmati, Shivudu falls in love with a young warrior woman. While trying to woo her, he learns about the conflict-ridden past of his family and his true legacy.\n\nRelease date: 10 July 2015 (India)\n\nDirector: S. S. Rajamouli\n\nStarring: Prabhas; Rana Daggubati; Tamannaah; Anushka Shetty; Ramya Krishna; Sathyaraj; Nassar\n\nMusic by: M. M. Keeravani\n\nProduced by: : Shobu Yarlagadda; Prasad Devineni";
    char eega[1000]="\nEega:\n\tNani loves Bindu but is killed by a jealous Sudeep, who lusts after Bindu. Nani is reincarnated as a fly and decides to avenge his death. He teams up with Bindu to make Sudeep's life a living hell.\n\nRelease date: 6 July 2012 (India)\n\nDirectors: S. S. Rajamouli, J.V.V. Sathyanarayana\n\nStarring: Sudeep; Nani; Samantha\n\nMusic by: M. M. Keeravani\n\nBox office: est. ₹1.25–1.3 billion";
    char maryada[1000]="\nMaryada Ramanna:\n\tRamu returns to his hometown to sell a piece of land he owns and falls in love with a young woman only to find out that her parents want him dead.\n\nRelease date: 23 July 2010 (India)\n\nDirector: S. S. Rajamouli\n\nStarring: Sunil; Saloni; Nagineedu\n\nMusic by: M. M. Keeravani\n\nBudget: ₹60 million\n\nBox office: : est.₹ 300–400 million";
    fprintf(fptr,"%s",rrr);
    fprintf(fptr,"%s",bb2);
    fprintf(fptr,"%s",bb1);
    fprintf(fptr,"%s",eega);
    fprintf(fptr,"%s",maryada);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("\n\nas you choose 1 to view rrr\n");
        printf("%s",rrr);
        break;
    case 2:
        printf("\n\nas you choose 2 to view bahubali 2:the conclusion\n");
        printf("%s",bb2);
        break;
    case 3:
        printf("\n\nas you choose 3 to view bahubali:the beginnning\n");
        printf("%s",bb1);
        break;
    case 4:
        printf("\n\nas you choose 4 to view eega\n");
        printf("%s",eega);
        break;
    case 5:
        printf("\n\nas you choose 5 to view maryada ramanna\n");
        printf("%s",maryada);
        break;
    default:
        printf("thank you");
        break;
    }

}
void trivikram()
{
    int i;
    printf("Trivikram  Srinivas:\n\tAkella Naga Srinivasa Sarma (born 7 November 1971), known professionally as Trivikram Srinivas, is an Indian film director and screenwriter known for his works in Telugu cinema.\n\tTrivikram's craft is known for its high dose of comedy, fast-paced repartee, farcical situations, escapist themes; courtship, family and marriage.\n\t He has garnered seven State Nandi Awards, two Filmfare Awards South, and a SIIMA Award. In 2000, he wrote dialogues for Nuvve Kavali, which won the National Film Award for Best Feature Film in Telugu for that year. His debut directorial Telugu film Nuvve Nuvve (2002) has garnered the Nandi Award for Best Feature Film (Silver).") ;
    printf("\n\nrecent five movies of trivikram srinivas are\n");
    printf("1.Ala Vaikunthapuramuloo(2020)\n2.Aravinda sametha(2018)\n3.agnathavasi(2018)\n4.A Aa(2016)\n5.S/O of satyamuthy(2015)");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char avp[1000]="\nAla Vaikuntapuram lo:\n\tBantu grows up being constantly subjected to his father's scorn. However, when he learns of his real parentage, he decides to carve a place for himself within the family he truly belongs to.\n\nRelease date: 12 January 2020 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Allu Arjun; Pooja Hegde; Tabu; Jayaram; Sushanth; Nivetha Pethuraj\n\nProduction companies: Geetha Arts; Haarika & Hassine Creations\n\n";
    char aravinda[1000]="\nAravinda sametha:\n\tThe film revolves around a young man whose life changes after engaging in a violent fight with henchmen from the rival village. He escapes to Hyderabad and decides to stay away from violence in order to bring peace between the two villages whose people have been constantly affected by the feud for 30 years.\n\nRelease date: 11 October 2018 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: N. T. Rama Rao Jr. ; Pooja Hegde; Eesha Rebba; Jagapathi Babu\n\nBox office: est. ₹165 crore\n\nProduction company: Haarika & Hassine Creations";
    char agnatha[1000]="\nAgnathavasi:\n\tA billionaire's son returns to his family's company following the death of his father. Disguising himself as a regular employee, he sets out to avenge his father's murder.\n\nRelease date: 10 January 2018 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Pawan Kalyan; Keerthy Suresh; Anu Emmanuel; Aadhi Pinisetty\n\nFeatured song: Kodaka Koteeswara Rao\n\nBox office: est. ₹95 crore\n\nBudget: ₹70 crore";
    char aa[1000]="\nA Aa:\n\tAnasuya, the daughter of a rich woman, falls in love with Aanand. However, they face several obstacles while trying to convince their families about their relationship.\n\nRelease date: 2 June 2016 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Nithiin; Samantha; Anupama Parameswaran\n\nMusic by: Mickey J Meyer\n\nBudget: ₹35 crore\n\nBox office: est. ₹75.4 crore";
    char satyamurthy[1000]="\nS/O satyamuthy:\n\tAfter the death of his billionaire father, a young man awakens to the harsh reality of his fortune. To complicate matters further, he falls in love with a hardened creditor's daughter.\n\nRelease date: 9 April 2015 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Allu Arjun; Samantha; Upendra; Nithya Menen; Sneha; Adah Sharma\n\nMusic by: Devi Sri Prasad\n\nProduction company: Haarika & Hassine Creations";
    fprintf(fptr,"%s",avp);
    fprintf(fptr,"%s",aravinda);
    fprintf(fptr,"%s",agnatha);
    fprintf(fptr,"%s",aa);
    fprintf(fptr,"%s",satyamurthy);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("\n\nas you choose 1 to view ala vaikuntapuram lo\n");
        printf("%s",avp);
        break;
    case 2:
        printf("\n\nas you choose 2 to view aravinda sametha\n");
        printf("%s",aravinda);
        break;
    case 3:
        printf("\n\nas you choose 3 to view agnathavasi\n");
        printf("%s",agnatha);
        break;
    case 4:
        printf("\n\nas you choose 4 to view aa\n");
        printf("%s",aa);
        break;
    case 5:
        printf("\n\nas you choose 5 to view s/o satyamurthy\n");
        printf("%s",satyamurthy);
        break;
    default:
        printf("thank you");
    }
}
void boyapati()
{
    int i;
    printf("Boyapati srinu:\n\tBoyapati Srinivas, commonly known as Boyapati Srinu or Boyapati Sreenu, is an Indian film director and screenwriter. Best known for directing films in Telugu cinema, Boyapati has garnered two state Nandi Awards.");
    printf("\n\nrecent five movies of trivikram srinivas are\n");
    printf("\n1.Akhanda(2021)\n2.Vinaya Vidheya Rama(2019)\n3.Jaya jana ki nayaka(2017)\n4.sarrainodu(2016)\n5.legend(2014)\n\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char akhanda[1000]="\nAkhnada:\n\tA child is taken in by Aghora, becoming a fierce devotee of Lord Shiva, living up to his destiny to stand tall against evildoers.\n\nRelease date: 2 December 2021 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Nandamuri Balakrishna; Pragya Jaiswal; Jagapathi Babu; Srikanth\n\nMusic by: S. Thaman\n\nProduction company: Dwaraka Creations\n\nCinematography: C. Ram Prasad";
    char vvr[1000]="\nVinaya vidheya rama:\n\tWhen a criminal mastermind poses a threat to his family's happiness, Ram, a young man, sets out to destroy his enemy and his evil kingdom.\n\nRelease date: 11 January 2019 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Ram Charan; Vivek Oberoi; Kiara Advani\n\nMusic by: Devi Sri Prasad";
    char jjn[1000]="\nJaya janaki nayaka:\n\tGagan and Sweety fall in love but are forced to break up because her father disapproves of him. While defending a family from thugs one day, Gagan unknowingly saves Sweety and vows to protect her.\n\nRelease date: 11 August 2017 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Bellamkonda Sreenivas; Rakul Preet Singh; Jagapathi Babu\n\nProduced by: M. Ravinder\n\nProduction company: Dwaraka Creations";
    char sarrainodu[1000]="\nSarrianodu:\n\tAn ex-military man beats up corrupt individuals who have escaped punishment from the law. However, he is caught in a dilemma when his lover promises to marry him only if he gives up his violent ways.\n\nRelease date: 22 April 2016 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Allu Arjun; Rakul Preet Singh; Catherine Tresa; Srikanth; Aadhi Pinisetty\n\nBox office: est. ₹127.6 crore\n\nBudget: ₹50 crore";
    char legend[1000]="\nLegend:\n\tKrishna, who lives in Dubai, falls in love with Sneha. He comes to India to seek the blessings of his grandmother, unaware that don Jeetendra's gang is seeking revenge.\n\nRelease date: 28 March 2014 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Nandamuri Balakrishna; Jagapathi Babu; Sonal Chauhan; Radhika Apte\n\nMusic by: Devi Sri Prasad\n\nBox office: est. ₹37.95 crore ";
    fprintf(fptr,"%s",akhanda);
    fprintf(fptr,"%s",vvr);
    fprintf(fptr,"%s",jjn);
    fprintf(fptr,"%s",sarrainodu);
    fprintf(fptr,"%s",legend);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("\n\nas you choose 1 to view Akhanda\n");
        printf("%s",akhanda);
        break;
    case 2:
        printf("\n\nas you choose 2 to view Vineya vidheya Rama\n");
        printf("%s",vvr);
        break;
    case 3:
        printf("\n\nas you choose 3 to view Jaya janaki nayaka\n");
        printf("%s",jjn);
        break;
    case 4:
        printf("\n\nas you choose 4 to view sarrainodu\n");
        printf("%s",sarrainodu);
        break;
    case 5:
        printf("\n\nas you choose 5 to view legend\n");
        printf("%s",legend);
        break;
    default:
        printf("thank you");
    }
}
void rgv()
{
    int i;
    printf("\nRGV:\n\tPenmetsa Ram Gopal Varma is an Indian film director, screenwriter and producer, known for his works predominantly in Telugu and Hindi films, in addition to television.\nVarma directed films across multiple genres, including parallel cinema and docudrama noted for their gritty realism, technical finesse, and craft. Regarded as one of the pioneers of new age Indian cinema,Varma received the National Film Award for scripting the political crime drama, Shool (1999).\n In 2004, he was featured in the BBC World series Bollywood Bosses. In 2006, Grady Hendrix of Film Comment, published by the Film Society of Lincoln Center cited Varma as \"Bombay’s Most Successful Maverick\" for his works on experimental films.");
    printf("\n\nrecent five movies of rgv are\n");
    printf("1.dangerous(2021)\n2.thriller(2020)\n3.powerstar(2020)\n4.naked(2020)\n5.climax(2020)");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char dangerous[1000]="\nDangerous:\n\tDangerous is a story of two women who have some bad experiences with men and in due course passionately fall in love with each other. The film's story proceeds with how violently they fight the men to protect their love leads to an explosive climax.";
    char thriller[1000]="\nThriller:\n\tWhen a girl brings her friend over for the night, a chain of frightening instances is put in motion. One thing leads to another and the horror ends in a way that she had never imagined.\nDirector: Ram Gopal Varma";
    char powerstar[1000]="\nPower star:\n\tThe film starts with the character of Prawan Kalyan feeling disgusted after his loss in the prestigious elections. He meets a series of characters that represent people like his star mega brother, ex AP CM, a journalist and finally, the surprise is the entry of Ram Gopal Varma himself who speaks to Prawan Kalyan and tells him what went wrong and what kind of a fan actually he is of him. How all this is showcased is the rest of the story.";
    char naked[1000]="\nNaked:\n\tStory of a married couple in whose house a servant boy works. The couple are constantly fighting and on the verge of a break-up and then one day something happens which puts all 3 of them through a dizzying tension.";
    char climax[1000]="\nClimax:\n\tMia Malkova and her boyfriend try to do things out of the blue and enter a desert even after there is a no-entry board written on it. In this situation, scary things and some crazy people start troubling them. The couple runs for their life and reaches a small town only to know there are more dangerous situations are in store for them. Who is behind these incidents and how the couple comes out of this mess forms the crux of the story.";
    fprintf(fptr,"%s",dangerous);
    fprintf(fptr,"%s",thriller);
    fprintf(fptr,"%s",powerstar);
    fprintf(fptr,"%s",naked);
    fprintf(fptr,"%s",climax);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("\n\nas you choose 1 to view dangerous\n");
        printf("%s",dangerous);
        break;
    case 2:
        printf("\n\nas you choose 2 to view thriller\n");
        printf("%s",thriller);
        break;
    case 3:
        printf("\n\nas you choose 3 to view powerstar\n");
        printf("%s",powerstar);
        break;
    case 4:
        printf("\n\nas you choose 4 to view naked\n");
        printf("%s",naked);
        break;
    case 5:
        printf("\n\nas you choose 5 to view climax\n");
        printf("%s",climax);
        break;
    default:
        printf("thank you");
    }
}
void sukumar()
{
    int i;
    printf("\nSukumar:\n\tSukumar Bandreddi is an Indian film director, producer, and screenwriter who predominantly works in Telugu cinema. Born in Mattaparru, East Godavari district of Andhra PradeshPradesh. \nSukumar worked as a mathematics and physics lecturer at the Aditya Junior college, Kakinada for nearly six years before pursuing a career in films.\nSukumar made his directorial debut with Arya in 2004, whose success catapulted him to stardom. Sukumar won the Filmfare Award for Best Director – Telugu and Nandi Award for Best Screenplay Writer for his work in Arya. ");
    printf("\n\nrecent five movies of sukumar are\n");
    printf("1.Pushpa:the rise(2021)\n2.rangasthalam(2018)\n3.nannaku prematho(2016)\n4.1:nenokkadine(2014)\n5.100 percent love\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char pushpa[1000]="\nPushpa:the rise\n\tViolence erupts between red sandalwood smugglers and the police charged with bringing down their organisation in the Seshachalam forests of South India.\n\nRelease date: 17 December 2021 (India)\n\nDirector: Sukumar\n\nMusic by: Devi Sri Prasad\n\nBox office: est. ₹365 crores\n\nStarring: Allu Arjun; Fahadh Faasil; Rashmika Mandanna\n\nProduced by: Naveen Yerneni; Y. Ravi Shankar";
    char rangasthalam[1000]="\nRangasthalam:\n\tA young man with impaired hearing and his elder brother decide to oppose the tyrannical rule of Phanindra, the corrupt leader of their village's local government.\n\nRelease date: 30 March 2018 (India)\n\nDirector: Sukumar\n\nStarring: Ram Charan; Samantha Akkineni; Aadhi Pinisetty\n\nBox office: est. ₹216 crore\n\nBudget: ₹60 crore";
    char nannaku[1000]="\nNannaku prematho:\n\tAbhiram, son of a businessman, learns that his father once lost all his wealth because of a cunning man Krishnamurthy Kautilya. He decides to seek revenge on Krishnamurthy and take away his fortune.\n\nRelease date: 13 January 2016 (India)\n\nDirector: Sukumar\n\nStarring: N. T. Rama Rao Jr. Jagapathi Babu; Rajendra Prasad; Rakul Preet Singh\n\nBox office: est. ₹87.2 crore\n\nBudget: ₹45–50 crore";
    char one[1000]="\n1:nenu okkadine\n\tA rock star, who suffers from a mental disorder due to his bitter past, is convinced that his parents were murdered by three men. Taking the support of a journalist, he sets out to find the evil men.\n\nRelease date: 10 January 2014 (India)\n\nDirector: Sukumar\n\nStarring: Mahesh Babu; Kriti Sanon; Kelly Dorje; Nasser; Pradeep Rawat; Anu Hassan\n\nMusic by: Devi Sri Prasad\n\nBudget: ₹700 million";
    char love[1000]="\n100 percent love:\n\tBalu and Mahalakshmi fall for each other but go their separate ways due to ego clashes. Years later, when their grandmother falls ill, they are forced to confront each other.\n\nRelease date: 6 May 2011 (India)\n\nDirector: Sukumar\n\nMusic by: Devi Sri Prasad\n\nStarring: Naga Chaitanya; Tamannaah\n\nWritten by: M J Saikumar; T Ramesh";
    fprintf(fptr,"%s",pushpa);
    fprintf(fptr,"%s",rangasthalam);
    fprintf(fptr,"%s",nannaku);
    fprintf(fptr,"%s",one);
    fprintf(fptr,"%s",love);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("\n\nas you choose 1 to view pushpa\n");
        printf("%s",pushpa);
        break;
    case 2:
        printf("\n\nas you choose 2 to view rangasthalam\n");
        printf("%s",rangasthalam);
        break;
    case 3:
        printf("\n\nas you choose 3 to view nannaku prematho\n");
        printf("%s",nannaku);
        break;
    case 4:
        printf("\n\nas you choose 4 to view one\n");
        printf("%s",one);
        break;
    case 5:
        printf("\n\nas you choose 5 to view love\n");
        printf("%s",love);
        break;
    default:
        printf("thank you");
    }
}
int hero()
{
    int i;
    printf("\nThe following are the top heroes of tollywood\n1.Prabhas \n2.allu arjun\n3.pawan kalyan\n4. jr.NTR\n5.ram charan\nenter the number indicated to them to view particular hero\nenter any other number to exit\n\nyourchoice:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        praboss();
        break;
    case 2:
        AA();
        break;
    case 3:
        pk();
        break;
    case 4:
        ntr();
        break;
    case 5:
        rc();
        break;
    default:
        printf("thank you");
    }
    return 0;
}
void praboss()
{
    int i;
    printf("\nPrabhas\n\tUppalapati Venkata Suryanarayana Prabhas Raju, known mononymously as Prabhas, is an Indian actor who works predominantly in Telugu cinema. One of the highest-paid actors in Indian cinema, Prabhas has featured in Forbes India's Celebrity 100 list three times since 2015 based on his income and popularity.\n\tHe has received seven Filmfare Awards South nominations and is a recipient of the Nandi Award and the SIIMA Award.He won the state Nandi Award for Best Actor for his performance in Mirchi.\n\tIn 2015, Prabhas starred in the title role in S. S. Rajamouli's epic action film Baahubali 2: The Conclusion (2017), which became the first Indian film ever to gross over ₹1,000 crore (US$155 million) in all languages in just ten days, and is the second highest-grossing Indian film to date.");
    printf("\n\nrecent five movies of Prabhas are\n");
    printf("1.Radhe shyam(2022)\n2.Saaho(2019)\n3.Bahubali 2:the conclusion(2017)\n4.Bahubali:the beginning(2015)\n5.Mirchi(2013)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char radheshyam[1000]="Radhe Shyam:\n\tRadhe Shyam is a romantic drama set in Europe in the 1970s starring Prabhas and Pooja Hegde in prominent roles, the film tells the story of Vikramaditya (prabhas), a palmist who is conflicted between destiny and his love for Prerana (pooja hegde).\n\nRelease date: 11 March 2022 (India)\n\nDirector: Radha Krishna Kumar\n\nBox office:still counting\n\nBudget: ₹300–350 crore\n\nStarring: Prabhas; Pooja Hegde\n\nProduced by: Bhushan Kumar (Hindi); Vamsi; Pramod; Praseedha (Telugu)\n\nProduction companies: T-Series Films; UV Creations";
    char saaho[1000]="\nSaaho:\n\tAn undercover agent and his partner go after a thief who has stolen 2,000 crore rupees. Soon, they realise that the case is linked to the death of a crime lord and an emerging gang war.\n\nRelease date: 30 August 2019 (India)\n\nDirector: Sujeeth\n\nMusic by: Score: Ghibran; Songs: Tanishk Bagchi; Guru Randhawa; Badshah; Shankar–Ehsaan–Loy\n\nStarring: Prabhas; Shraddha Kapoor; Jackie Shroff; Neil Nitin Mukesh; Arun Vijay; Chunky Pandey\n\nBudget: 350 crores INR (2017)\n\nBox office:est 433 crores INR\n\nProduction companies: UV Creations; T-Series Films";
    char bb2[1000]="\nBahubali 2:the conclusion\n\tAfter knowing that his father was brutally killed by Bhallaladeva, Mahendra Baahubali raises an army to defeat him and release his mother from the former's captivity.\n\nRelease date: 28 April 2017 (India)\n\nDirector: S. S. Rajamouli\n\nBox office: est. ₹1,810 crore\n\nBudget: 250 crores INR\n\ncast: Prabhas; Rana Daggubati; Anushka Shetty; Tamannaah; Ramya Krishna; Sathyaraj; Nassar; Subbaraju\n";
    char bb1[1000]="\nBahubali:the beginning\n\tIn the kingdom of Mahishmati, Shivudu falls in love with a young warrior woman. While trying to woo her, he learns about the conflict-ridden past of his family and his true legacy.\n\nRelease date: 10 July 2015 (India)\n\nDirector: S. S. Rajamouli\n\nStarring: Prabhas; Rana Daggubati; Tamannaah; Anushka Shetty; Ramya Krishna; Sathyaraj; Nassar\n\nMusic by: M. M. Keeravani\n\nProduced by: : Shobu Yarlagadda; Prasad Devineni";
    char mirchi[1000]="\nMirchi:\n\tA girl falls in love with a boy after he helps her and manages to win the hearts of her family with his good deeds. However, she is unaware that he belongs to a rival family.\n\nRelease date: 8 February 2013 (India)\n\nDirector: Koratala Siva\n\nStarring: Prabhas; Anushka Shetty; Richa Gangopadhyay\n\nMusic director: Devi Sri Prasad\n\nBox office: est.₹80 crore";
    fprintf(fptr,"%s",radheshyam);
    fprintf(fptr,"%s",saaho);
    fprintf(fptr,"%s",bb2);
    fprintf(fptr,"%s",bb1);
    fprintf(fptr,"%s",mirchi);
    fclose(fptr);    
    switch(i)
    {
    case 1:
        printf("%s",radheshyam);
        break;
    case 2:
        printf("%s",saaho);
        break;
    case 3:
        printf("%s",bb2);
        break;
    case 4:
        printf("%s",bb1);
        break;
    case 5:
        printf("%s",mirchi);
        break;
    default :
        printf("thank you");
        break;
    }
}
void AA()
{
    int i;
    printf("\nAllu arjun:\n\tAllu Arjun is an Indian actor who predominantly works in Telugu films. He is one of the highest paid actors in South India and known for his dancing abilities.\n\tAllu is a recipient of several awards, including five Filmfare Awards South and five Nandi Awards.Since 2014, he has been featured in Forbes India's Celebrity 100 list based on his income and popularity.");
    printf("\n\nrecent five movies of allu arjun are\n1.Pushpa:the rise(2021)\n2.Ala vaikunthapurramulo(2020)\n3.DJ:Duvvada jagannadham(2017)\n4.Sarrainodu(2016)\n5.s/o satyamurthy(2015)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char pushpa[1000]="\nPushpa:the rise\n\tViolence erupts between red sandalwood smugglers and the police charged with bringing down their organisation in the Seshachalam forests of South India.\n\nRelease date: 17 December 2021 (India)\n\nDirector: Sukumar\n\nMusic by: Devi Sri Prasad\n\nBox office: est. ₹365 crores\n\nStarring: Allu Arjun; Fahadh Faasil; Rashmika Mandanna\n\nProduced by: Naveen Yerneni; Y. Ravi Shankar";
    char avp[1000]="\nAla Vaikuntapuram lo:\n\tBantu grows up being constantly subjected to his father's scorn. However, when he learns of his real parentage, he decides to carve a place for himself within the family he truly belongs to.\n\nRelease date: 12 January 2020 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Allu Arjun; Pooja Hegde; Tabu; Jayaram; Sushanth; Nivetha Pethuraj\n\nProduction companies: Geetha Arts; Haarika & Hassine Creations\n\n";
    char dj[1000]="\nDJ:Duvvada jagannadham:\n\tDJ, a rebellious man and a cook, gets trained to become an undercover officer and is assigned to take down a corrupt politician. Unexpectedly, he falls in love with the politician's daughter.\n\nRelease date: 23 June 2017 (India)\n\nDirector: Harish Shankar\n\nstarring:allu arjun;pooja hegde\n\nMusic director: Devi Sri Prasad\n\nBox office: est. ₹115.10 crore\n\nBudget: ₹50 crore\n\nProduced by: Dil Raju";
    char sarrainodu[1000]="\nSarrianodu:\n\tAn ex-military man beats up corrupt individuals who have escaped punishment from the law. However, he is caught in a dilemma when his lover promises to marry him only if he gives up his violent ways.\n\nRelease date: 22 April 2016 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Allu Arjun; Rakul Preet Singh; Catherine Tresa; Srikanth; Aadhi Pinisetty\n\nBox office: est. ₹127.6 crore\n\nBudget: ₹50 crore";
    char satyamurthy[1000]="\nS/O satyamuthy:\n\tAfter the death of his billionaire father, a young man awakens to the harsh reality of his fortune. To complicate matters further, he falls in love with a hardened creditor's daughter.\n\nRelease date: 9 April 2015 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Allu Arjun; Samantha; Upendra; Nithya Menen; Sneha; Adah Sharma\n\nMusic by: Devi Sri Prasad\n\nProduction company: Haarika & Hassine Creations";
    fprintf(fptr,"%s",pushpa);
    fprintf(fptr,"%s",avp);
    fprintf(fptr,"%s",dj);
    fprintf(fptr,"%s",sarrainodu);
    fprintf(fptr,"%s",satyamurthy);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",pushpa);
        break;
    case 2:
        printf("%s",avp);
        break;
    case 3:
        printf("%s",dj);
        break;
    case 4:
        printf("%s",sarrainodu);
        break;
    case 5:
        printf("%s",satyamurthy);
        break;
    default:
        printf("thank you");
    }
}
void pk()
{
    int i;
    printf("\nPawan kalyan:\n\tPawan Kalyan is an Indian actor, director, screenwriter, stunt coordinator, philanthropist, and politician. Referred to as \"Power Star\" by his fans.His films are predominantly in Telugu cinema.\n\t Kalyan is the younger brother of actor-politician Chiranjeevi, and made his debut in the 1996 film Akkada Ammayi Ikkada Abbayi. \n\tHe starred in Tholi Prema in 1998, which won the National Film Award for Best Feature Film in Telugu that year.");
    printf("\n\nrecent five movies of Pawan kalyan are\n1.Bheemla nayak(2022)\n2.Vakeel saab(2021)\n3.Agnyathavaasi(2018)\n4.Katamarayudu\n5.Sardaar gabbar singh(2016)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char bheemla[1000]="\nBheemla Nayak:\n\tThings change when the egos of an upright police officer and a retired army havildar clash.\n\nRelease date: 25 February 2022 (India)\n\nDirector: Saagar K Chandra\n\nMusic by: S. Thaman\n\nStarring: Pawan Kalyan; Rana Daggubati; Nithya Menen; Samyuktha Menon\n\nProduction company: Sithara Entertainments";
    char vakeel[1000]="\nVakeel saab:\n\tAfter being molested by Vamsi, a politician's son, Pallavi, along with her friends, is unable to lodge a complaint against him. However, an alcoholic lawyer, Satyadev, comes to their rescue.\n\nRelease date: 9 April 2021 (India)\n\nDirector: Venu Sriram\n\nStarring: Pawan Kalyan; Nivetha Thomas; Anjali; Ananya Nagalla; Prakash Raj; Shruti Haasan\n\nProduced by: Dil Raju; Sirish; Boney Kapoor\n\nProduction companies: Sri Venkateswara Creations; Bayview Projects";
    char agnatha[1000]="\nAgnathavasi:\n\tA billionaire's son returns to his family's company following the death of his father. Disguising himself as a regular employee, he sets out to avenge his father's murder.\n\nRelease date: 10 January 2018 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Pawan Kalyan; Keerthy Suresh; Anu Emmanuel; Aadhi Pinisetty\n\nFeatured song: Kodaka Koteeswara Rao\n\nBox office: est. ₹95 crore\n\nBudget: ₹70 crore";
    char katamarayudu[1000]="\nKatamarayudu:\n\tKatamarayudu tries to give up his violent ways at the behest of Avantika, his fiancee. However, he is forced to break his promise and take up arms when Avantika's family is threatened by evil forces.\n\nRelease date: 24 March 2017 (India)\n\nDirector: Kishore Kumar Pardasani\n\nStarring: Pawan Kalyan; Shruti Haasan; Tarun Arora; Siva Balaji\n\nBox office: est. ₹97.5 crore\n\nProduction company: North Star Entertainment";
    char sgabbar[1000]="\nSardaar Gabbar Singh:\n\tBhairav Singh who unceremoniously usurps their land. They find respite when Gabbar Singh, a brave policeman, takes on their oppressor.\n\nRelease date: 8 April 2016 (India)\n\nDirector: K. S. Ravindra\n\nStarring: Pawan Kalyan; Kajal Aggarwal; Sharad Kelkar; Sanjjanaa Galrani\n\nBox office: est. ₹90 crore\n\nBudget: ₹75 crore";
    fprintf(fptr,"%s",bheemla);
    fprintf(fptr,"%s",vakeel);
    fprintf(fptr,"%s",agnatha);
    fprintf(fptr,"%s",katamarayudu);
    fprintf(fptr,"%s",sgabbar);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",bheemla);
        break;
    case 2:
        printf("%s",vakeel);
        break;
    case 3:
        printf("%s",agnatha);
        break;
    case 4:
        printf("%s",katamarayudu);
        break;
    case 5:
        printf("%s",sgabbar);
        break;
    default:
        printf("thank you");
    }
}
void ntr()
{
    int i;
    printf("\nNTR:\n\tNandamuri Taraka Rama Rao Jr. also known as Jr NTR or Tarak, is an Indian actor, singer, and television presenter who works in Telugu cinema. In his film career spanning 20 years, he has worked in over 30 films. \n\tPopularly referredas Young tiger  of Tollywood,Rama Rao has received two state Nandi Awards, two Filmfare Awards South and four CineMAA Awards. One of the highest paid Telugu film actors, he was ranked 28th in Forbes India Celebrity 100 list in 2018.");
    printf("\n\nrecent five movies of NTR are\n1.RRR(2022)\n2.Aravindha sametha(2018)\n3.Jai lavakusa(2017)\n4.janatha gaarage(2016)\n5.Nannaku prematho(2016)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char rrr[1000]="\nRRR:\n\tA tale of two legendary revolutionaries and their journey far away from home. After their journey they return home to start fighting back against British colonialists in the 1920s.\n\nRelease date: 25 March 2022 (India)\n\nDirector: S. S.Rajamouli\n\nMusic by: M. M. Keeravani\n\nBudget: 400 crores INR\n\nProduced by: D. V. V. Danayya\n\nCast:N. T. Rama Rao,Ram Charan, Ajay Devgn,Alia Bhatt,Spandan,Olivia Morris,Samuthirakani,Alison Doody,Ray Stevenson,Shriya Saran, rajeev kanakala.";
    char aravinda[1000]="\nAravinda sametha:\n\tThe film revolves around a young man whose life changes after engaging in a violent fight with henchmen from the rival village. He escapes to Hyderabad and decides to stay away from violence in order to bring peace between the two villages whose people have been constantly affected by the feud for 30 years.\n\nRelease date: 11 October 2018 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: N. T. Rama Rao Jr. ; Pooja Hegde; Eesha Rebba; Jagapathi Babu\n\nBox office: est. ₹165 crore\n\nProduction company: Haarika & Hassine Creations";
    char jlv[1000]="\nJai lava kusa:\n\tIdentical triplets, Jai, Lava and Kusa, get separated at a young age and follow different paths in life. Jai becomes an evil criminal, Kusa becomes a small-time crook and Lava becomes a bank manager.\n\nRelease date: 21 September 2017 (India)\n\nDirector: K. S. Ravindra\n\nStarring: Jr. NTR; Raashi Khanna; Nivetha Thomas\n\nFeatured song: Nee Kallalona\n\nBox office: est. ₹130.6–150 crore\n\nProduction company: N.T.R. Arts";
    char janatha[1000]="\nJanatha garage:\n\tAnand, an environmental activist, comes to Hyderabad to attend a seminar. An unexpected encounter with Sathyam, who runs an organization for the oppressed, changes his purpose in life.\n\nRelease date: 1 September 2016 (India)\n\nDirector: Koratala Siva\n\nStarring: Mohanlal; N. T. Rama Rao Jr. Samantha; Nithya Menen\n\nProduced by: Naveen Yerneni; Y. Ravi Shankar; C. V. Mohan\n\nProduction company: Mythri Movie Makers";
    char nannaku[1000]="\nNannaku prematho:\n\tAbhiram, son of a businessman, learns that his father once lost all his wealth because of a cunning man Krishnamurthy Kautilya. He decides to seek revenge on Krishnamurthy and take away his fortune.\n\nRelease date: 13 January 2016 (India)\n\nDirector: Sukumar\n\nStarring: N. T. Rama Rao Jr. Jagapathi Babu; Rajendra Prasad; Rakul Preet Singh\n\nBox office: est. ₹87.2 crore\n\nBudget: ₹45–50 crore";
    fprintf(fptr,"%s",rrr);
    fprintf(fptr,"%s",aravinda);
    fprintf(fptr,"%s",jlv);
    fprintf(fptr,"%s",janatha);
    fprintf(fptr,"%s",nannaku);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",rrr);
        break;
    case 2:
        printf("%s",aravinda);
        break;
    case 3:
        printf("%s",jlv);
        break;
    case 4:
        printf("%s",janatha);
        break;
    case 5:
        printf("%s",nannaku);
        break;
    default:
        printf("thank you");
    }
}
void rc()
{
    int i;
    printf("\nRam charan:\n\tKonidela Ram Charan Teja  is an Indian actor, producer and entrepreneur who works predominantly in Telugu cinema. One of the highest-paid actors in India,he is the recipient of several awards, including three Filmfare Awards and two Nandi Awards. Since 2013, he has been featured in Forbes India's Celebrity 100 list based on his income and popularity.");
    printf("\n\nrecent five movies of ram charan are\n1.RRR(2022)\n2.Vineya vidheya rama(2019)\n3.Rangasthalam(2018)\n4.dhruva(2016)\n5.Bruce Lee:the fighter\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char rrr[1000]="\nRRR:\n\tA tale of two legendary revolutionaries and their journey far away from home. After their journey they return home to start fighting back against British colonialists in the 1920s.\n\nRelease date: 25 March 2022 (India)\n\nDirector: S. S.Rajamouli\n\nMusic by: M. M. Keeravani\n\nBudget: 400 crores INR\n\nProduced by: D. V. V. Danayya\n\nCast:N. T. Rama Rao,Ram Charan, Ajay Devgn,Alia Bhatt,Spandan,Olivia Morris,Samuthirakani,Alison Doody,Ray Stevenson,Shriya Saran, rajeev kanakala.";
    char vvr[1000]="\nVinaya vidheya rama:\n\tWhen a criminal mastermind poses a threat to his family's happiness, Ram, a young man, sets out to destroy his enemy and his evil kingdom.\n\nRelease date: 11 January 2019 (India)\n\nDirector: Boyapati Srinu\n\nStarring: Ram Charan; Vivek Oberoi; Kiara Advani\n\nMusic by: Devi Sri Prasad";
    char rangasthalam[1000]="\nRangasthalam:\n\tA young man with impaired hearing and his elder brother decide to oppose the tyrannical rule of Phanindra, the corrupt leader of their village's local government.\n\nRelease date: 30 March 2018 (India)\n\nDirector: Sukumar\n\nStarring: Ram Charan; Samantha Akkineni; Aadhi Pinisetty\n\nBox office: est. ₹216 crore\n\nBudget: ₹60 crore";
    char dhruva[1000]="\nDhruva:\n\tDhruva, an IPS officer, discovers a strong network of organised crime. He then intends to take down the mastermind behind a huge racket and encounters numerous challenges on his way.\n\nRelease date: 9 December 2016 (India)\n\nDirector: Surender Reddy\n\nStarring: Ram Charan; Arvind Swamy; Rakul Preet Singh; Navdeep\n\nBox office: ₹87.55 crore\n\nProduced by: Allu Aravind; N. V. Prasad";
    char brucelee[1000]="\nBruce Lee:\n\tKartik sacrifices his studies for his sister and becomes a stuntman. Often mistaken for an undercover policeman, Kartik helps unearth the evil designs of businessmen Deepak Raj and Jayaraj.\n\nRelease date: 16 October 2015 (India)\n\nDirector: Srinu Vaitla\n\nStarring: Ram Charan; Arun Vijay; Rakul Preet Singh; Kriti Kharbanda\n\nMusic by: S. Thaman\n\nBudget: ₹600 million";
    fprintf(fptr,"%s",rrr);
    fprintf(fptr,"%s",vvr);
    fprintf(fptr,"%s",rangasthalam);
    fprintf(fptr,"%s",dhruva);
    fprintf(fptr,"%s",brucelee);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",rrr);
        break;
    case 2:
        printf("%s",vvr);
        break;
    case 3:
        printf("%s",rangasthalam);
        break;
    case 4:
        printf("%s",dhruva);
        break;
    case 5:
        printf("%s",brucelee);
        break;
    default:
        printf("thank you");
    }
}
void heroine()
{
    int i;
    printf("\nThe following are the top heroines of tollywood\n1.samantha ruth prabhu\n2.rashmika mandanna \n3.pooja hegde\n4.kajal agarwal\n5.tammana bhatia\n\nenter the number indicated to them to view particular heroine\nenter any other number to exit\n\nyourchoice:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        sam();
        break;
    case 2:
        rashmika();
        break;
    case 3:
        hackde();
        break;
    case 4:
        kajal();
        break;
    case 5:
        tammanah();
        break;
    default:
        printf("thank you");
        break;
    }
}
void sam()
{
    int i;
    printf("\nSamantha:\n\tSamantha Ruth Prabhu is an Indian actress who mainly works in Telugu and Tamil film industries. She is a recipient of several awards, including four Filmfare Awards South, six South Indian International Movie Awards and two Andhra Pradesh State Nandi Awards. \n\tShe has established herself as one of the leading actresses in Telugu and Tamil cinema.At the same time, she also started her own NGO, Pratyusha Support, to provide medical support for women and children in 2012.");
    printf("\n\nrecent five movies of samantha are\n1.jaanu(2020)\n2.oh!baby(2019)\n3.majili(2019)\n4.mahanati(2018)\n5.rangasthalam\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char jaanu[1000]="\nJaanu:\n\tRam and Jaanu are childhood sweethearts who meet at their school reunion after nearly two decades. Although initially awkward, they soon start recollecting their past and resolve their differences.\n\nRelease date: 7 February 2020 (India)\n\nDirector: C. Prem Kumar\n\nMusic director: Govind Vasantha\n\nStarring: Sharwanand; Samantha\n\nAdapted from: 96";
    char baby[1000]="\nOh!baby:\n\tSavitri, a 70-year-old woman who is unhappy with her life, accuses God for her problems. When she gets her photograph clicked at a studio, she is transformed into a beautiful 24-year-old girl.\n\nRelease date: 5 July 2019 (India)\n\nDirector: B. V. Nandini Reddy\n\nStarring: Samantha Akkineni; Lakshmi\n\nMusic director: Mickey J Meyer\n\nAdapted from: Miss Granny";
    char majili[1000]="\nMajili:\n\tAfter being abandoned by his lover, Anshu, Poorna takes to alcohol and is forced to marry his neighbour, Sravani. However, he soon discovers her unrequited love for him and falls for her.\n\nRelease date: 5 April 2019 (India)\n\nDirector: Shiva Nirvana\n\nStarring: Naga Chaitanya; Samantha Ruth Prabhu; Divyansha Kaushik\n\nBox office: est. ₹700 million\n\nBudget: ₹200 million";
    char mahanati[1000]="\nMahanati:\n\tSavitri, the most admired actress from South Indian cinema, goes through various tragic incidents in her personal life. Unable to cope with depression, she eventually becomes an alcoholic.\n\nRelease date: 9 May 2018 (India)\n\nDirector: Nag Ashwin\n\nStarring: Keerthy Suresh; Dulquer Salmaan; Samantha Akkineni; Vijay Deverakonda\n\nFeatured song: Mooga Manasulu\n\nBox office: est. ₹83 crore\n\nAwards: National Film Award for Best Actress, National Film Award for Best Feature Film in Telugu. ";
    char rangasthalam[1000]="\nRangasthalam:\n\tA young man with impaired hearing and his elder brother decide to oppose the tyrannical rule of Phanindra, the corrupt leader of their village's local government.\n\nRelease date: 30 March 2018 (India)\n\nDirector: Sukumar\n\nStarring: Ram Charan; Samantha Akkineni; Aadhi Pinisetty\n\nBox office: est. ₹216 crore\n\nBudget: ₹60 crore";
    fprintf(fptr,"%s",jaanu);
    fprintf(fptr,"%s",baby);
    fprintf(fptr,"%s",majili);
    fprintf(fptr,"%s",mahanati);
    fprintf(fptr,"%s",rangasthalam);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",jaanu);
        break;
    case 2:
        printf("%s",baby);
        break;
    case 3:
        printf("%s",majili);
        break;
    case 4:
        printf("%s",mahanati);
        break;
    case 5:
        printf("%s",rangasthalam);    
        break;
    default:
        printf("thank you");
        break;
    }
}
void rashmika()
{
    int i;
    printf("\nRashmika Mandanna:\n\tRashmika Mandanna  is an Indian actress and model who works predominantly in Telugu and Kannada language films. She is a recipient of the Filmfare Award South and the SIIMA Award. She is known for her roles in Kirik Party and Geetha Govindam.");
    printf("\n\nrecent five movies of samanthaare\n1.pushpa:the rise(2021)\n2.bheeshma(2020)\n3.sarileru neekevvaru(2020)\n4.dear comrade(2019)\n5.devadas\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char pushpa[1000]="\nPushpa:the rise\n\tViolence erupts between red sandalwood smugglers and the police charged with bringing down their organisation in the Seshachalam forests of South India.\n\nRelease date: 17 December 2021 (India)\n\nDirector: Sukumar\n\nMusic by: Devi Sri Prasad\n\nBox office: est. ₹365 crores\n\nStarring: Allu Arjun; Fahadh Faasil; Rashmika Mandanna\n\nProduced by: Naveen Yerneni; Y. Ravi Shankar";
    char bheeshma[1000]="\nBheeshma:\n\tWhen Bheeshma gets involved with Chaitra, an employee of Bheeshma Organics, he develops an interest in organic farming. Trouble ensues when her company announces a new product that seems to be shady.\n\nRelease date: 21 February 2020 (India)\n\nDirector: Venky Kudumula\n\nStarring: Nithiin; Rashmika Mandanna\n\nBox office: ₹40 crore";
    char slne[1000]="\nSarileruNeekevvaru:\n\tAjay, an army major, journeys to Kurnool when he is assigned a covert mission. However, he finds himself in the middle of a major scam and sets out to uncover the truth.\nnInitial release: 10 January 2020\n\nDirector: Anil Ravipudi\n\nFeatured song: Sarileru Neekevvaru Anthem\n\nStarring: Mahesh Babu; Rashmika Mandanna; Vijayashanti; Prakash Raj; Rajendra Prasad\n\nBox office: est. ₹260 crore\n\nBudget: ₹75 crore";
    char comrade[1000]="\nDear.comrade:\n\tBobby, a student union leader with anger issues, falls in love with Lilly, a state-level cricketer. However, his temperament poses an obstacle in his path to being united with Lily.\n\nRelease date: 26 July 2019 (India)\n\nDirector: Bharat Kamma\n\nMusic by: Justin Prabhakaran\n\nStarring: Vijay Deverakonda; Rashmika Mandanna; Shruti Ramachandran\n\nBox office: est. ₹37.33 crore";
    char devadas[1000]="\nDevadas:\n\tDas, an honest doctor, meets Deva, a dreaded gangster, and the two develop a deep friendship. However, Das's profession causes a rift between the two friends.\n\nRelease date: 27 September 2018 (India)\n\nDirector: Sriram Adittya T\n\nStarring: Nagarjuna Akkineni; Nani; Aakanksha Singh; Rashmika Mandanna\n\nBox office: est. ₹45 crore\n\nMusic by: Mani Sharma";
    fprintf(fptr,"%s",pushpa);
    fprintf(fptr,"%s",bheeshma);
    fprintf(fptr,"%s",slne);
    fprintf(fptr,"%s",comrade);
    fprintf(fptr,"%s",devadas);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",pushpa);
        break;
    case 2:
        printf("%s",bheeshma);
        break;
    case 3:
        printf("%s",slne);
        break;
    case 4:
        printf("%s",comrade);
        break;
    case 5:
        printf("%s",devadas);
        break;
    default:
        printf("thank you");
        break;
    }
}
void hackde()
{
    int i;
    printf("\nPooja hegde:\n\tPooja Hegde  is an Indian actress and model who appears predominantly in Telugu films, in addition to a few Hindi and Tamil films. She is a recipient of the SIIMA Award. She was crowned as the second runner-up at the Miss Universe India 2010 competition. She made her Telugu film debut alongside Naga Chaitanya in Oka Laila Kosam (2014).");
    printf("\n\nrecent five movies of pooja hegde are\n1.radheshyam(2022)\n2.ala vaikunthapurramulo\n3.gaddalakonda ganesh(2019)\n4.maharshi(2019)\n5.aravindha sametha(2018)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char radheshyam[1000]="Radhe Shyam:\n\tRadhe Shyam is a romantic drama set in Europe in the 1970s starring Prabhas and Pooja Hegde in prominent roles, the film tells the story of Vikramaditya (prabhas), a palmist who is conflicted between destiny and his love for Prerana (pooja hegde).\n\nRelease date: 11 March 2022 (India)\n\nDirector: Radha Krishna Kumar\n\nBox office:still counting\n\nBudget: ₹300–350 crore\n\nStarring: Prabhas; Pooja Hegde\n\nProduced by: Bhushan Kumar (Hindi); Vamsi; Pramod; Praseedha (Telugu)\n\nProduction companies: T-Series Films; UV Creations";
    char avp[1000]="\nAla Vaikuntapuram lo:\n\tBantu grows up being constantly subjected to his father's scorn. However, when he learns of his real parentage, he decides to carve a place for himself within the family he truly belongs to.\n\nRelease date: 12 January 2020 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: Allu Arjun; Pooja Hegde; Tabu; Jayaram; Sushanth; Nivetha Pethuraj\n\nProduction companies: Geetha Arts; Haarika & Hassine Creations\n\n";
    char ganesh[1000]="\nGaddalakonda ganesh:\n\tA film-maker aspires to make a gangster movie and selects the hardened Gaddalakonda Ganesh as his subject. Soon, he and his friend put their lives on the line to follow Gaddalakonda's life.\n\nRelease date: 20 September 2019 (India)\n\nDirector: Harish Shankar\n\nStarring: Varun Tej; Atharvaa; Pooja Hegde; Mirnalini Ravi\n\nBudget: ₹25 crore\n\nBox office: est. ₹42.5 crores";
    char maharshi[1000]="\nMaharshi:\n\tA rich businessman returns to India to mend ways with his ex-classmate. However, when he learns about his friend's plight, he tries to help him and becomes a saviour for the villagers in the process.\n\nRelease date: 9 May 2019 (India)\n\nDirector: Vamshi Paidipallyn\n\nStarring: Mahesh Babu; Pooja Hegde; Allari Naresh\n\nMusic director: Devi Sri Prasad\n\nBox office: : est.₹145–200 crore";
    char aravinda[1000]="\nAravinda sametha:\n\tThe film revolves around a young man whose life changes after engaging in a violent fight with henchmen from the rival village. He escapes to Hyderabad and decides to stay away from violence in order to bring peace between the two villages whose people have been constantly affected by the feud for 30 years.\n\nRelease date: 11 October 2018 (India)\n\nDirector: Trivikram Srinivas\n\nStarring: N. T. Rama Rao Jr. ; Pooja Hegde; Eesha Rebba; Jagapathi Babu\n\nBox office: est. ₹165 crore\n\nProduction company: Haarika & Hassine Creations";
    fprintf(fptr,"%s",radheshyam);
    fprintf(fptr,"%s",avp);
    fprintf(fptr,"%s",ganesh);
    fprintf(fptr,"%s",maharshi);
    fprintf(fptr,"%s",aravinda);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",radheshyam);
        break;
    case 2:
        printf("%s",avp);
        break;
    case 3:
        printf("%s",ganesh);
        break;
    case 4:
        printf("%s",maharshi);
        break;
    case 5:
        printf("%s",aravinda);
        break;
    default:
        printf("thank you");
        break;
    }
}
void kajal()
{
    int i;
    printf("\nKajal Agarwal:\n\tKajal Aggarwal  is an Indian actress and model who mainly appears in Telugu and Tamil language films, in addition to a few Hindi films.She has acted in more than 50 films.\n\tIn 2020, a wax figure of Aggarwal was put on display at Madame Tussauds Singapore, making it the first of an actress from South Indian cinema.");
    printf("\n\nrecent five movies of kajal agarwal are\n1.mosagallu(2021)\n2.ranarangam(2019)\n3.sita(2019)\n4.kavacham(2018)\n5.mla(2018)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char mosagallu[1000]="\nMosagallu:\n\tA cultural clash between generations, between east and west, and between rich and poor; on a moral downward spiral, yet an upward climb to great financial success, Anu and Arjun become savvy criminals and devise an ingenious scam.\n\nInitial release: 19 March 2021\n\nDirector: Jeffrey Gee Chin\n\nStarring: Vishnu Manchu; Kajal Aggarwal; Suniel Shetty; Ruhi Singh; Navdeep; Naveen Chandra\n\nBudget: ₹51 crore\n\nBox office: est. ₹38.90 crore\n\nProduction companies: 24 Frames Factory; AVA";
    char ranarangam[1000]="\nRanarangam:\n\tA powerful gangster tries to put his life of crime and violence behind him. However, he finds it difficult to gain a measure of peace due to enemies from his past.\n\nRelease date: 15 August 2019 (India)\n\nDirector: Sudheer Varma\n\nStarring: Sharwanand; Kajal Aggarwal; Kalyani Priyadarshan\n\nMusic by: Prashant Pillai\n\nBox office: est. ₹15.96 crore";
    char sita[1000]="\nSita:\n\tA young Ram is left in a monastery by his uncle with a promise that Sita will come for him and take care of him. Years later, he is ecstatic when he meets Sita but she is nowhere interested in him.\n\nRelease date: 24 May 2019 (India)\n\nDirector: Teja\n\nStarring: Kajal Aggarwal; Bellamkonda Sreenivas; Sonu Sood\n\nMusic by: Anoop Rubens\n\nProduced by: Sunkara Ramabrahmam";
    char kavacham[1000]="\nKavacham:\n\tVijay, an honest police officer, meets Samyukta at a cafe and falls in love with her. However, his life changes when he witnesses a kidnapping and ends up helping a lonely woman, Lavanya.\n\nRelease date: 7 December 2018 (India)\n\nDirector: Sreenivas Mamilla\n\nStarring: Bellamkonda Sreenivas; Neil Nitin Mukesh; Kajal Aggarwal; Mehreen Pirzada\n\nMusic by: S. Thaman\n\nProduction company: Vamsadhara Creations";
    char mla[1000]="\nMLA:\n\tKalyan, a simple man, falls for Indu, a rich landlord's daughter. In order to prove his love for Indu, Kalyan must become an MLA and only if he succeeds, he gets to marry her.\n\nRelease date: 23 March 2018 (India)\n\nDirector: Upendra Madhav\n\nMusic by: Mani Sharma\n\nBox office: est. ₹17.5 crore";
    fprintf(fptr,"%s",mosagallu);
    fprintf(fptr,"%s",ranarangam);
    fprintf(fptr,"%s",sita);
    fprintf(fptr,"%s",kavacham);
    fprintf(fptr,"%s",mla);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",mosagallu);
        break;
    case 2:
        printf("%s",ranarangam);
        break;
    case 3:
        printf("%s",sita);
        break;
    case 4:
        printf("%s",kavacham);
        break;
    case 5:
        printf("%s",mla);
        break;
    default:
        printf("thank you");
        break;
    }
}
void tammanah()
{
    int i;
    printf("\nTammanah:\n\tTamanna Bhatia , known professionally as Tamannaah, is an Indian actress who appears primarily in Telugu and Tamil films, along with some Hindi films. In addition to acting, she also participates in stage shows and is a prominent celebrity endorser for brands and products.\n\tShe received the \"Dayawati Modi\" Award in 2017. She also received an honorary doctorate from the Confederation of International Accreditation Commission for her contributions to Indian cinema.");
    printf("\n\nrecent five movies of tammanah are\n1.maestro(2021)\n2.seetimaar(2021)\n3.syeraa(2019)\n4.F2(2019)\n5.na nuvve(2018)\n");
    printf("\nenter the number indicated by the movie to get details of that particular movie\nenter any other number to exit\nyour choice:");
    scanf("%d",&i);
    FILE *fptr;
    fptr=fopen("movies.txt","a");
    char maestro[1000]="\nMaestro:\n\tA pianist pretends to be blind to enhance his musical skills but later gets a stable job at a restaurant. However, when he continues his ruse, he witnesses a murder, falling into his own trap.\n\nInitial release: 17 September 2021\n\nDirector: Merlapaka Gandhi\n\nStarring: Nithiin; Tamannaah; Nabha Natesh\n\nMusic by: Mahati Swara Sagar\n\nProduced by: Sudhakar Reddy; Nikitha Reddy\n\nProduction company: Shresht Movies";
    char seetimaar[1000]="\nSeetimaar:\n\tKarthi, a simple bank employee, coaches a women's kabaddi team from his village and trains them to become professional players and win the championship.\n\nInitial release: 10 September 2021\n\nDirector: Sampath Nandi\n\nStarring: Gopichand; Tamannaah; Digangana Suryavanshi; Bhumika Chawla\n\nBox office: est. ₹15.10 crore\n\nBudget: ₹25 crore";
    char syeraa[1000]="\nSyeraa narasimha Reddy:\n\tTen years before the Sepoy Mutiny, Emperor Uyyalawada Narasimha Reddy of the Rayalaseema region fights the British East India Company in order to put an end to their atrocities.\n\nRelease date: 2 October 2019 (India)\n\nDirector: Surender Reddy\n\nStarring: Chiranjeevi; Nayanthara; Tamannaah; Sudeep; Vijay Sethupathi; Jagapathi Babu\n\nBox office: est. ₹240.6 crore\n\nBudget: 200 crores INR (2017)";
    char f2[1000]="\nF2:fun and frustation\n\tTwo young men hope to control their wives after their respective marriages. However, their chauvinistic attitude often lands them in hilarious situations.\n\nRelease date: 12 January 2019 (India)\n\nDirector: Anil Ravipudi\n\nStarring: Venkatesh; Varun Tej; Tamannaah; Mehreen Pirzada\n\nMusic by: Devi Sri Prasad\n\nBudget: ₹30 crore";
    char nanuvve[1000]="\nNa Nuvve:\n\tMeera, a happy-go-lucky radio jockey, falls for Varun in a very unusual way. However, they must overcome many obstacles, including their different perspectives on life, to be together.\n\nRelease date: 14 June 2018 (India)\n\nDirector: Jayendra Panchapakesan\n\nStarring: Nandamuri Kalyan Ram; Tamannaah; Vennela Kishore\n\nProduction company: Cool Breeze Cinemas";
    fprintf(fptr,"%s",maestro);
    fprintf(fptr,"%s",seetimaar);
    fprintf(fptr,"%s",syeraa);
    fprintf(fptr,"%s",f2);
    fprintf(fptr,"%s",nanuvve);
    fclose(fptr);
    switch(i)
    {
    case 1:
        printf("%s",maestro);
        break;
    case 2:
        printf("%s",seetimaar);
        break;
    case 3:
        printf("%s",syeraa);
        break;
    case 4:
        printf("%s",f2);
        break;
    case 5:
        printf("%s",nanuvve);
        break;
    default:
        printf("thank you");
        break;
    }
}