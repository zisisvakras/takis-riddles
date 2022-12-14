# Πλήθος τρόπων να ανέβουμε μία σκάλα
## Problem
Έστω ότι θέλουμε να ανέβουμε μία σκάλα που έχει 7 σκαλοπάτια. Σε κάθε βήμα μας, μπορούμε να ανέβουμε είτε ένα σκαλοπάτι, είτε δύο. Με   πόσους τρόπους μπορούμε να ανέβουμε τη σκάλα; Για παράδειγμα, ένας τρόπος είναι ο 1-1-1-1-1-1-1, δηλαδή σε κάθε βήμα ανεβαίνουμε ένα   σκαλοπάτι. Άλλος είναι ο 2-2-2-1 (τρία βήματα των δύο σκαλοπατιών και στο τελευταίο βήμα ένα σκαλοπάτι). Άλλος ο 2-1-1-2-1, κοκ.  Γενικεύστε το πρόβλημα για σκάλα με Ν σκαλοπάτια.  
## Solution
Όπως πολύ σωστά αναφέρθηκε σε αρκετές απαντήσεις στη συνέχεια, το πλήθος των τρόπων να ανέβουμε μία σκάλα με N σκαλοπάτια, με 1 ή 2  σκαλοπάτια σε κάθε βήμα, δίνεται από τον N-οστό όρο της ακολουθίας Fibonacci. Η εξήγηση είναι η εξής.  

Έστω f(N) το πλήθος των τρόπων να ανέβουμε μία σκάλα με Ν σκαλοπάτια, ανεβαίνοντας σε κάθε βήμα 1 ή 2 σκαλοπάτια.  

Μπορούμε να ανέβουμε τη σκάλα με τα Ν σκαλοπάτια  
είτε ανεβαίνοντας πρώτα 1 σκαλοπάτι και μετά τα υπόλοιπα Ν-1, για τα οποία υπάρχουν f(N-1) τρόποι να τα ανεβούμε  
είτε ανεβαίνοντας πρώτα 2 σκαλοπάτια και μετά τα υπόλοιπα Ν-2, για τα οποία υπάρχουν f(N-2) τρόποι να τα ανεβούμε  
Οπότε, το πλήθος των διαφορετικών τρόπων f(N) να ανέβουμε μία σκάλα με Ν σκαλοπάτια ισούται με το άθροισμα του πλήθους των τρόπων f  (N-1) να ανέβουμε Ν-1 σκαλοπάτια με το πλήθος των τρόπων f(N-2) να ανέβουμε Ν-2 σκαλοπάτια. Δηλαδή: f(N) = f(N-1) + f(N-2).  

Για Ν = 1, f(1) = 1, γιατί υπάρχει μόνο ένας τρόπος να ανέβουμε 1 σκαλοπάτι.  
Για Ν = 2, f(2) = 2, γιατί υπάρχουν δύο τρόποι να ανέβουμε 2 σκαλοπάτια (δύο βήματα του ενός σκαλοπατιού ή ένα βήμα των δύο   σκαλοπατιών).  

Οι τιμές του f(N), για N = 1, 2, 3, ..., είναι ουσιαστικά οι όροι της λεγόμενης ακολουθίας Fibonacci  
(https://en.wikipedia.org/wiki/Fibonacci_number) από τον 3ο και μετά (τυπικά, οι δύο πρώτοι όροι της ακολουθίας αυτής είναι το 0 και το 1).  