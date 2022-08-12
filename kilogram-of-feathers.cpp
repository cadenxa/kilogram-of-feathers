#include <iostream>
#include <string>

bool rollperception = false;
bool ofthisworld = false;
bool theonlyway = false;

void start();
void kindUncertainty();
void blackHole();
void wakeUpDefault();
void perceive();
void strangeLetter();
void ofWorldPath();
void rollPercepPath();
void onlyWay();
void end();
void restartChoice();


void next() {

  std::string entertext;
  std::cin >> entertext;
  // Do nothing with entertext, it doesn't matter
  std::cout << "\n";
}

void start() {
  std::cout << "Kilogram of Feathers\nA Text Adventure Written in C++\n(enter anything to continue. Cannot be blank or a space.)"; next();
  std::cout << "Which is heavier, a kilogram of lead or a kilogram of feathers? (next)"; next();
  std::cout << "Actually... Don't answer that... (next)"; next();
  std::cout << "You dream of fire and brimstone, of a melody that is not of this world. There is no pain. This Hell in particular is not for you, but you get this feeling that another fate lies ahead on the Nether brick road. (next)"; next();
  kindUncertainty();
}

void kindUncertainty() {
  std::cout << "White feathers and the petals of green lilies trail behind you. The kindness of uncertainty leads you forward. Wake up?\n(enter the number of your answer)\n1. Yes\n2. No\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {std::cout << "\n\n";
  std::cout << "You dream of a void, then of entering a black hole. (next)"; next();
  std::cout << "There is no concept of away. In order to travel away, you must travel backwards in time. (next)"; next();
  blackHole();}
  else if (answer == 2) {std::cout << "\n\n"; kindUncertainty();}
  else {
    std::cout << "Enter 1 or 2.\n\n";
    kindUncertainty();
  }
}

void blackHole(){
  if (rollperception && ofthisworld) {
    std::cout << "Travel backwards in time?\n(enter the number of your answer)\n1. Yes, it's the only way.\n2. No, that's impossible.\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {std::cout << "\n\n"; onlyWay();}
  else if (answer == 2) {std::cout << "\n\n"; wakeUpDefault();}
  else {
    std::cout << "Enter 1 or 2.\n\n";
    blackHole();
    }
  }
  else {
    wakeUpDefault();
  }
}

void wakeUpDefault(){
  std::cout << "There is no hope for your weak human brain of understanding this phenomenon. The despair of it all shocks you awake. (next)"; next();
  std::cout << "It is October the second, 2016. A Sunday. Not that it matters anyhow, since you stopped going to church months ago. (next)"; next();
  std::cout << "You wake up not in your own apartment, but in the damp grass on a hill under the highway bridge. (continue)"; next();
  perceive();
}

void perceive() {
  std::cout << "What do you notice first?\n(enter the number of your answer)\n1. Itchy twine around your neck.\n2. The light touch of paper on your chest\n3. Nothing. What?\n";
  int answer;
  std::cin >> answer;
  if (answer == 1 || answer == 2) {
    std::cout << "You feel around your chest, and something crinkles. You're wearing a piece of school notebook paper, with twine threaded through the holes and tied in a loop to make a necklace. (next)\n"; next();
    std::cout << "You stand up and take it off with care. There's a note written on it. (next)\n"; next();
    std::cout << "\n\n"; strangeLetter();}
  else if (answer == 3) {std::cout << "\n\n"; rollPercepPath();}
  else {
    std::cout << "Enter 1,2, or 3.\n\n";
    perceive();
    }
}

void strangeLetter(){
  bool whoWrote = false;
  bool msgContents = false;
  for (int i = 1; i<10; i++){
    if (whoWrote && msgContents) {ofWorldPath();}
    else if (whoWrote){
        std::cout << "What do you want to know?\n(enter the number of your answer)\n1. What does it say?\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {msgContents = true; 
  std::cout << "\n\n"; 
  std::cout << "'Deactivate...' huh? You can't get through it. Even attempting to read the body of the letter gives you a blinding migraine. (next)"; next();}
  else {
    std::cout << "Enter 1.\n\n";}
    }
    else if (msgContents){
        std::cout << "What do you want to know?\n(enter the number of your answer)\n1. Who wrote it?\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {whoWrote = true; 
  std::cout << "\n\n"; 
  std::cout << "It's not signed. It's addressed to your kid brother, yet written in his own handwriting. A note to himself? Why would _you_ have it, in that case? (next)"; next();}
  else {
    std::cout << "Enter 1.\n\n";}
    }
    else {  
  std::cout << "What do you want to know?\n(enter the number of your answer)\n1. Who wrote it?\n2. What does it say?\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {whoWrote = true; 
  std::cout << "\n\n"; 
  std::cout << "It's not signed. It's addressed to your kid brother, yet written in his own handwriting. A note to himself? Why would _you_ have it, in that case? (next)"; next();}
  else if (answer == 2) {msgContents = true;
  std::cout << "\n\n"; 
  std::cout << "'Deactivate...' huh? You can't get through it. Even attempting to read the body of the letter gives you a blinding migraine. (next)"; next();}
  else {
    std::cout << "Enter 1 or 2.\n\n";}
    }
  }
  ofWorldPath();
}

void ofWorldPath(){
  std::cout << "Well, this is concerning. You fold the paper up and put it in your pocket. (next)"; next();
  std::cout << "You know this stretch of the city well. It's on the way from your apartment to work. You bike past this hill regularly.\nPerhaps you wiped out last night and don't remember it. Though that wouldn't explain the note... or why your clothes are unsullied by the mud that's all around. Or the lack of a bike. (next)"; next();
  std::cout << "The police station is up ahead, past the bus stop. When you walk there, you're greeted by a friendly policeman who is guarding the door. He seems to be about your age and slightly taller than you. (next)"; next();
  std::cout << "He recognizes you right away! He escorts you in immediately and sits you down in a chair, assuring you that he'll call your brother, 'right away, sir!' All the while, you keep hearing about one 'missing person report.' (next)"; next();
  std::cout << "You've been... missing. You're the missing person, and your brother and his school have been working with the police to find you. While waiting, you check your phone. The day is Saturday, January 21st, 2017. That's 3 months from now, no? But if today is that day, then yesterday, October the first, was 3 months ago. But you have no memories of this 3 months... (next)"; next();
  std::cout << "About an hour later, your brother rushes in, accompanied by his teacher from the academy. She drove him here. (next)"; next();
  std::cout << "He gives you a hug, the biggest hug ever. You hold him securely, as if you'll never let go. You're not entirely sure yet what happened, why you weren't home, but you'll never leave his side again. (next)"; next();
  ofthisworld = true;
  end();
}

void rollPercepPath(){
  std::cout << "The rain outside the relative shelter of the bridge lulls you into a daze, staring at the road above, feeling nothing of the metal that holds it up or the vehicles that thunder by. (next)"; next();
  std::cout << "An unspecified interval later, it's time to come back to reality. It's cold out here... unreasonably cold for an October morning. (next)"; next();
  std::cout << "You know this stretch of the city well. It's on the way from your apartment to work. You bike past this hill regularly. \nPerhaps you wiped out last night and don't remember it. Though that wouldn't explain the note... or why your clothes are unsullied by the mud that's all around. Or the lack of a bike. (next)"; next();
  std::cout << "You walk back home. The place is empty. In the bathroom mirror, you look like death. (next)"; next();
  std::cout << "A piece of school notebook paper with twine threaded through the holes is tied in a loop around your neck. Thinking nothing of it, you take it off and put the paper down to look at later. (next)"; next();
  std::cout << "Why isn't your brother here? He could be out with his friends he won't let you meet, so you take out your phone to send him a quick text. (next)"; next();
  std::cout << "He leaves you on read... (next)"; next();
  std::cout << "Until he comes home midday. (next)"; next();
  std::cout << "He gives you a hug, the biggest hug ever. You hold him securely, as if you'll never let go. You're not entirely sure yet what happened, why you weren't home, but you'll never leave his side again. (next)"; next();
  rollperception = true;
  end();
}

void onlyWay(){
  std::cout << "The melody of fire and brimstone from an eternity ago plays in reverse. You wake up. (next)"; next();
  std::cout << "It is October the second, 2016. A Sunday. Not that it matters anyhow, since you stopped going to church months ago. (next)"; next();
  std::cout << "You wake up in your bed. A bed that is entirely yours! You paid for it! With an entry-level job at a law firm that sucks your spirit dry, yet it's a position you are incredibly grateful to have. (next)"; next();
  std::cout << "You spend this day off relaxing. Scrolling your phone, you sign up for a social media app. Eerily, the app recommends you follow a very specific group of people. Some of them are very familiar, but so different at the same time. (next)"; next();
  std::cout << "A spectre of a past haunts this group, and it has something to do with you. Some respond to your presence with rudeness, others with confusion. You are equally if not more confused. (next)"; next();
  std::cout << "Turns out, this social media is connecting you through posts and messages to a group of people from 12 years in the future. As you start to understand what happened, you get further and further entrenched into another world's goings-on. Perhaps _too_ much. You can't stop now. (next)"; next();
  theonlyway = true;
  end();
}

void end(){
  std::cout << "~ FIN ~\n\n"; 
  std::cout << "Endings:\n";
  if (rollperception) {
    std::cout << "- Roll Perception: Remain unaware and process reality later.\n";
  }
  if (ofthisworld) {
    std::cout << "- The Melody Not of This World: Find out that you've been a missing person for 3 months, with no memory of your time lost.\n";
  }
  if (theonlyway) {
    std::cout << "- It's the Only Way: A glimpse of another timeline, one you were saved from. Or is this the one that saves you?\n";
  }
  std::cout << "(next)"; next();
  std::cout << "Your spirit is as fishing bait, cast out into the depths and reeled back in by the whims of others. (next)"; next();
  restartChoice();
}

void restartChoice(){
    std::cout << "Start over or end the program? If you end the program, you reset the memory of which endings you've received.\n(enter the number of your answer)\n1. Start Over\n2. End Program\n";
  int answer;
  std::cin >> answer;
  if (answer == 1) {std::cout << "\n\n";
  start();}
  else if (answer == 2) {std::cout << "\n\n"; std::exit(0);}
  else {
    std::cout << "Enter 1 or 2.\n\n";
    restartChoice();
  }
}

int main() {
  bool rollperception = false;
  bool ofthisworld = false;
  bool theonlyway = false;
  start();
  return 0;
}
