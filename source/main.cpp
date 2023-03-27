#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<string_view>

using namespace std;

// Player
class Player 
{   
    private:
        string m_name {};
        int m_health {30};

    public:
        Player();
        Player(int health);
        Player(string name, int health);

        void print()
        {
            cout << "Player Name: " << m_name << '\n';
            cout << "  Player Health: " << m_health << '\n'; 
        }

        // set
        void setName(string name){m_name = name;}
        void setHealth(int health){m_health = health;}

        // get
        string getName(){return m_name;}
        int getHealth(){return m_health;}
};


Player::Player(int health)
{
    cout << "Enter the player's name: \n";
    cin >> m_name;
    m_health = health;
}

Player::Player(string name, int health = 30)
{
    m_name = name;
    m_health = health;
}

class Board 
{
    public: 
        Player p1;
        Player p2;
    
};

Player::Player()
{
    cout << "Enter the player's name: \n";
    cin >> m_name;
    m_health = 30;
}

// Card
class Card 
{
    private:
    public:
        string m_name {};
        string m_cardText {};
        int m_manaCost {};
        Card(string name, string cardText, int manaCost);
};

Card::Card(string name, string cardText, int manaCost)
{
    m_name = name;
    m_cardText = cardText;
    m_manaCost = manaCost;
}

// Minion 
class Minion : public Card 
{
    private:
    public: 
        int m_health {};
        int m_attack {};
        Minion(string name, string cardText, int manaCost, int health, int attack);
        void print()
        {
            cout << m_name << ":\n"
                << "Mana Cost: " << m_manaCost << '\n'
                << "Attack: " << m_attack << '\n'
                << "Health: " << m_health << '\n'
                << "Description: " << m_cardText << '\n'
        }
};

Minion::Minion(string name, string cardText, int manaCost, int health, int attack)
{
    Card(name, cardText, manaCost);
    m_health = health;
    m_attack = attack;
}



int main(){
    // Player p1 {"playa1", 30};
    // Player p2 {"playa2", 30};
    // p1.print();
    // p2.print();
    Minion ogre {Minion("Ogre", "A big ugly ogre.", 6, 6, 7)};
    ogre.print();
    return 1;
}

