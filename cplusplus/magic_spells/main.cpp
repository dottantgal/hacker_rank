#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
  Waterbolt *sa = dynamic_cast<Waterbolt*>(spell);
  Frostbite *sb = dynamic_cast<Frostbite*>(spell);
  Fireball *sc = dynamic_cast<Fireball*>(spell);
  Thunderstorm *sd = dynamic_cast<Thunderstorm*>(spell);
  if(sa) 
    sa->revealWaterpower();
  else if(sb) 
    sb->revealFrostpower();
  else if(sc) 
    sc->revealFirepower();
  else if(sd)
    sd->revealThunderpower();
  else
  {
    string str = spell->revealScrollName();
    string str2 = SpellJournal::journal;
    int n1 = str.length();
    int n2 = str2.length();
    int dp[n1+1][n2+1];
    for (int i = 0; i <= n1; i++)
    {
      for (int j = 0; j <= n2; j++)
      {
          if (i == 0 || j == 0)
            dp[i][j] = 0;
          else if (str[i-1] == str2[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;
          else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
    int index = dp[n1][n2];
  
    char lcs[index+1];
    lcs[index] = '\0';
  
    int i = n1, j = n2;
    while (i > 0 && j > 0)
    {
      if (str[i-1] == str2[j-1])
      {
        lcs[index-1] = str[i-1]; 
        i--; j--; index--;
      }
      else if (dp[i-1][j] > dp[i][j-1])
        i--;
      else
        j--;
    }
  
    int i2{0};
    int count{0};
    while (lcs[i2]!='\0')
      {
        count++;
        i2++;
      }
    cout << count << endl;
  }
  

}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}