#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX_STATIONS = 100;
const double FARE_PER_STATION = 5.0;
const int TIME_PER_STATION = 3;

class name
{

    void A(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if ((i <= 3 && i + j == 4) || (i >= 3 && j == 1) || (i >= 3 && j == 5) || (i <= 3 && j == i + 2) || i == 5)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void B(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || (j <= 3 && (i == 1 || i == 5 || i == 9)) || (j >= 3 && ((i <= 3 && j == i + 2) || (i >= 3 && i <= 5 && j + i == 8) || (i <= 7 && i >= 5 && j == i - 2) || (i >= 7 && i + j == 12))))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void C(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 9 || j == 1)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void D(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if ((j <= 3 && (i == 1 || i == 9)) || j == 1 || (j >= 5 && ((i <= 5 && j == i + 4) || (i >= 5 && i + j == 14))))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void E(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || i == 1 || (i == 5 && j <= 4) || i == 9)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void F(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || i == 1 || (i == 5 && j <= 4))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void G(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if ((j == 1 && i >= 4 && i <= 6) || ((i == 1 || i == 9) && j >= 4 && j <= 6) || i + j == 5 || i + j == 15 || i == j + 5 || (i == 5 && j >= 5))
                cout << "*";

            else
                cout << " ";
        }
    }

    void H(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || i == 5 || j == 5)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void I(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 3 || i == 1 || i == 9)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void J(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if ((j == 5 && i <= 7) || (i >= 7 && ((j <= 3 && i == j + 6) || (j >= 3 && i + j == 12))))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void K(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || (i <= 5 && i + j == 6) || (i >= 5 && i == j + 4))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void L(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || i == 9)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void M(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (j == 1 || j == 9 || (j <= 5 && i == j) || (j >= 5 && i + j == 10))
                cout << "*";

            else
                cout << " ";
        }
    }

    void N(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (j == 1 || j == 9 || i == j)
                cout << "*";

            else
                cout << " ";
        }
    }

    void O(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (((j == 1 || j == 9) && i >= 4 && i <= 6) || ((i == 1 || i == 9) && j >= 4 && j <= 6) || i + j == 5 || i + j == 15 || i == j + 5 || j == i + 5)
                cout << "*";

            else
                cout << " ";
        }
    }

    void P(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 5 || j == 1 || (j == 5 && i <= 5))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void Q(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (((j == 1 || j == 9) && i >= 4 && i <= 6) || ((i == 1 || i == 9) && j >= 4 && j <= 6) || i + j == 5 || i + j == 15 || i == j + 5 || j == i + 5 || (i >= 6 && i == j))
                cout << "*";

            else
                cout << " ";
        }
    }

    void R(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 5 || j == 1 || (j == 5 && i <= 5) || (i >= 5 && j == i - 4))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void S(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 5 || i == 9 || (j == 1 && i <= 5) || (j == 5 && i >= 5))
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void T(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || j == 3)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void U(int i)
    {
        int j;
        for (j = 1; j <= 5; j++)
        {

            if (j == 1 || j == 5 || i == 9)
                cout << "* ";

            else
                cout << "  ";
        }
    }

    void V(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if ((i <= 5 && (j == 1 || j == 9)) || (i >= 5 && (i == j + 4 || i + j == 14)))
                cout << "*";

            else
                cout << " ";
        }
    }

    void W(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if ((i <= 7 && (j == 1 || j == 9)) || (i >= 7 && (i == j + 6 || i + j == 12 || i == j + 2 || i + j == 16)))
                cout << "*";

            else
                cout << " ";
        }
    }

    void X(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (i == j || i + j == 10)
                cout << "*";

            else
                cout << " ";
        }
    }

    void Y(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if ((j == 5 && i >= 5) || (i <= 5 && (i == j || i + j == 10)))
                cout << "*";

            else
                cout << " ";
        }
    }

    void Z(int i)
    {
        int j;
        for (j = 1; j <= 9; j++)
        {

            if (i == 1 || i == 9 || j + i == 10)
                cout << "*";

            else
                cout << " ";
        }
    }

public:

    name() {}

    name(const char* s)
    {
        int x;

        for (int a = 1; a <= 9; a++)
        {

            for(int i=0;i<10000;i++)
            {

                for(int j=0;j<10000;j++)
                {

                }
            }

            x = 0;
            while (s[x] != '\0')
            {

                switch (s[x])
                {

                case 'A':
                    A(a);
                    break;

                case 'B':
                    B(a);
                    break;

                case 'C':
                    C(a);
                    break;

                case 'D':
                    D(a);
                    break;

                case 'E':
                    E(a);
                    break;

                case 'F':
                    F(a);
                    break;

                case 'G':
                    G(a);
                    break;

                case 'H':
                    H(a);
                    break;

                case 'I':
                    I(a);
                    break;

                case 'J':
                    J(a);
                    break;

                case 'K':
                    K(a);
                    break;

                case 'L':
                    L(a);
                    break;

                case 'M':
                    M(a);
                    break;

                case 'N':
                    N(a);
                    break;

                case 'O':
                    O(a);
                    break;

                case 'P':
                    P(a);
                    break;

                case 'Q':
                    Q(a);
                    break;

                case 'R':
                    R(a);
                    break;

                case 'S':
                    S(a);
                    break;

                case 'T':
                    T(a);
                    break;

                case 'U':
                    U(a);
                    break;

                case 'V':
                    V(a);
                    break;

                case 'W':
                    W(a);
                    break;

                case 'X':
                    X(a);
                    break;

                case 'Y':
                    Y(a);
                    break;

                case 'Z':
                    Z(a);
                    break;

                case ' ':
                    cout << "     ";
                    break;

                default:
                    cout << "invalid input";
                }

                x++;
                cout << "  ";

            }

            cout << "\n";
        }
    }

};
class MetroGraph {
    
    private:
    unordered_map<string, int> stationIndices;
    int adjacencyMatrix[MAX_STATIONS][MAX_STATIONS];
    int numStations;

public:
    MetroGraph() {
        numStations = 0;
        for (int i = 0; i < MAX_STATIONS; ++i) {
            for (int j = 0; j < MAX_STATIONS; ++j) {
                adjacencyMatrix[i][j] = 0;
            }
        }
    }

    void addStation(const string& station) {
        if (stationIndices.find(station) == stationIndices.end()) {
            stationIndices[station] = numStations++;
        }
    }

    void addConnection(const string& station1, const string& station2) {
        int index1 = stationIndices[station1];
        int index2 = stationIndices[station2];

        adjacencyMatrix[index1][index2] = 1;
        adjacencyMatrix[index2][index1] = 1;
    }

    vector<string> shortestPath(const string& start, const string& end) {
        int startIndex = stationIndices[start];
        int endIndex = stationIndices[end];

        queue<int> q;
        vector<bool> visited(numStations, false);
        vector<int> parent(numStations, -1);

        q.push(startIndex);
        visited[startIndex] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            if (current == endIndex) {
                vector<string> path;
                while (current != -1) {
                    path.push_back(getStationName(current));
                    current = parent[current];
                }
                reverse(path.begin(), path.end());
                return path;
            }

            for (int i = 0; i < numStations; ++i) {
                if (adjacencyMatrix[current][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    parent[i] = current;
                    q.push(i);
                }
            }
        }

        vector<string> emptyPath;
        return emptyPath;
    }

    string getStationName(int index) {
        for (const auto& pair : stationIndices) {
            if (pair.second == index) {
                return pair.first;
            }
        }
        return "";
    }

    bool stationExists(const string& station) {
        return stationIndices.find(station) != stationIndices.end();
    }

    void removeStation(const string& station) {
        if (stationExists(station)) {
            int index = stationIndices[station];
            stationIndices.erase(station);

            for (int i = 0; i < MAX_STATIONS; ++i) {
                adjacencyMatrix[index][i] = 0;
                adjacencyMatrix[i][index] = 0;
            }
        }
    }

    int countStations() {
        return numStations;
    }
};

int main() {

    MetroGraph delhiMetro;
name n("METROQUEST");

 cout<<endl;
    cout<<"==============="<<endl;
    cout<<"| METRO QUEST |"<<endl;
    cout<<"==============="<<endl;
    cout<<endl;

    cout<<"-------------"<<endl;
    cout<<"!! WELCOME !!"<<endl;
    cout<<"-------------"<<endl;
    cout<<endl;

    cout<<"How can we help you?"<<endl;


    delhiMetro.addStation("Kashmere Gate");
    delhiMetro.addStation("Civil Lines");
    delhiMetro.addStation("Vidhan Sabha");
    delhiMetro.addStation("Vishwavidyalaya");
    delhiMetro.addStation("Model Town");
    delhiMetro.addStation("Azadpur");
    delhiMetro.addStation("Shalimar Bagh");
    delhiMetro.addStation("Netaji Subhash Place");
    delhiMetro.addStation("Kohat Enclave");
    delhiMetro.addStation("Pitampura");
    delhiMetro.addStation("Rohini East");
    delhiMetro.addStation("Rohini West");
    delhiMetro.addStation("Rithala");
    delhiMetro.addStation("Barakhamba Road");
    delhiMetro.addStation("Mandi House");
    delhiMetro.addStation("Pragati Maidan");
    delhiMetro.addStation("Indraprastha");
    delhiMetro.addStation("Yamuna Bank");
    delhiMetro.addStation("Akshardham");
    delhiMetro.addStation("Mayur Vihar Phase 1");
    delhiMetro.addStation("Mayur Vihar Extension");
    delhiMetro.addStation("New Ashok Nagar");
    delhiMetro.addStation("Noida Sector 15");
    delhiMetro.addStation("Noida Sector 16");
    delhiMetro.addStation("Noida Sector 18");
    delhiMetro.addStation("Botanical Garden");
    delhiMetro.addStation("Golf Course");
    delhiMetro.addStation("Noida City Centre");
    delhiMetro.addStation("Vaishali");
    delhiMetro.addStation("Sarita Vihar");
    delhiMetro.addStation("Mohan Estate");
    delhiMetro.addStation("Tughlakabad");
    delhiMetro.addStation("Badarpur");
    delhiMetro.addStation("Saket");
    delhiMetro.addStation("Malviya Nagar");
    delhiMetro.addStation("Hauz Khas");
    delhiMetro.addStation("Green Park");
    delhiMetro.addStation("AIIMS");
    delhiMetro.addStation("INA");
    delhiMetro.addStation("Jor Bagh");
    delhiMetro.addStation("Lajpat Nagar");
    delhiMetro.addStation("Moolchand");
    delhiMetro.addStation("Kailash Colony");
    delhiMetro.addStation("Nehru Place");
    delhiMetro.addStation("Kalkaji Mandir");
    delhiMetro.addStation("Govindpuri");
    delhiMetro.addStation("Okhla");
    delhiMetro.addStation("Jasola Apollo");
    delhiMetro.addStation("Sarita Vihar");
    delhiMetro.addStation("Jamia Millia Islamia");
    delhiMetro.addStation("Sarai Kale Khan");
    delhiMetro.addStation("Hazrat Nizamuddin");
    delhiMetro.addStation("Ashram");
    delhiMetro.addStation("Sarai Kale Khan");
    delhiMetro.addStation("Lodi Colony");
    delhiMetro.addStation("Jawaharlal Nehru Stadium");
    delhiMetro.addStation("Central Secretariat");
    delhiMetro.addStation("Karol Bagh");
delhiMetro.addStation("Rajendra Place");
delhiMetro.addStation("Patel Nagar");
delhiMetro.addStation("Shadipur");
delhiMetro.addStation("Kirti Nagar");
delhiMetro.addStation("Moti Nagar");
delhiMetro.addStation("Ramesh Nagar");
delhiMetro.addStation("Rajouri Garden");
delhiMetro.addStation("Tagore Garden");
delhiMetro.addStation("Subhash Nagar");
delhiMetro.addStation("Tilak Nagar");
delhiMetro.addStation("Janakpuri East");
delhiMetro.addStation("Janakpuri West");
delhiMetro.addStation("Uttam Nagar East");
delhiMetro.addStation("Uttam Nagar West");
delhiMetro.addStation("Nawada");
delhiMetro.addStation("Dwarka Mor");
delhiMetro.addStation("Dwarka");
delhiMetro.addStation("Dwarka Sector 14");
delhiMetro.addStation("Dwarka Sector 13");
delhiMetro.addStation("Dwarka Sector 12");
delhiMetro.addStation("Dwarka Sector 11");
delhiMetro.addStation("Dwarka Sector 10");
delhiMetro.addStation("Dwarka Sector 9");
delhiMetro.addStation("Dwarka Sector 8");
delhiMetro.addStation("Dwarka Sector 7");
delhiMetro.addStation("Dwarka Sector 6");
delhiMetro.addStation("Dwarka Sector 5");

    delhiMetro.addConnection("Kashmere Gate", "Civil Lines");
    delhiMetro.addConnection("Civil Lines", "Vidhan Sabha");
    delhiMetro.addConnection("Vidhan Sabha", "Vishwavidyalaya");
    delhiMetro.addConnection("Vishwavidyalaya", "Model Town");
    delhiMetro.addConnection("Model Town", "Azadpur");
    delhiMetro.addConnection("Azadpur", "Shalimar Bagh");
    delhiMetro.addConnection("Shalimar Bagh", "Netaji Subhash Place");
    delhiMetro.addConnection("Netaji Subhash Place", "Kohat Enclave");
    delhiMetro.addConnection("Kohat Enclave", "Pitampura");
    delhiMetro.addConnection("Pitampura", "Rohini East");
    delhiMetro.addConnection("Rohini East", "Rohini West");
    delhiMetro.addConnection("Rohini West", "Rithala");
    delhiMetro.addConnection("Rithala", "Sarita Vihar");
    delhiMetro.addConnection("Sarita Vihar", "Mohan Estate");
    delhiMetro.addConnection("Mohan Estate", "Tughlakabad");
    delhiMetro.addConnection("Tughlakabad", "Badarpur");
    delhiMetro.addConnection("Badarpur", "Saket");
    delhiMetro.addConnection("Saket", "Malviya Nagar");
    delhiMetro.addConnection("Malviya Nagar", "Hauz Khas");
    delhiMetro.addConnection("Hauz Khas", "Green Park");
    delhiMetro.addConnection("Green Park", "AIIMS");
    delhiMetro.addConnection("AIIMS", "INA");
    delhiMetro.addConnection("INA", "Jor Bagh");
    delhiMetro.addConnection("Jor Bagh", "Lajpat Nagar");
    delhiMetro.addConnection("Lajpat Nagar", "Moolchand");
    delhiMetro.addConnection("Moolchand", "Kailash Colony");
    delhiMetro.addConnection("Kailash Colony", "Nehru Place");
    delhiMetro.addConnection("Nehru Place", "Kalkaji Mandir");
    delhiMetro.addConnection("Kalkaji Mandir", "Govindpuri");
    delhiMetro.addConnection("Govindpuri", "Okhla");
    delhiMetro.addConnection("Okhla", "Jasola Apollo");
    delhiMetro.addConnection("Jasola Apollo", "Sarita Vihar");
    delhiMetro.addConnection("Sarita Vihar", "Jamia Millia Islamia");
    delhiMetro.addConnection("Jamia Millia Islamia", "Sarai Kale Khan");
    delhiMetro.addConnection("Sarai Kale Khan", "Hazrat Nizamuddin");
    delhiMetro.addConnection("Hazrat Nizamuddin", "Ashram");
    delhiMetro.addConnection("Ashram", "Sarai Kale Khan");
    delhiMetro.addConnection("Sarai Kale Khan", "Lodi Colony");
    delhiMetro.addConnection("Lodi Colony", "Jawaharlal Nehru Stadium");
    delhiMetro.addConnection("Jawaharlal Nehru Stadium", "Central Secretariat");
    delhiMetro.addConnection("Central Secretariat", "Karol Bagh");
    delhiMetro.addConnection("Karol Bagh", "Rajendra Place");
delhiMetro.addConnection("Rajendra Place", "Patel Nagar");
delhiMetro.addConnection("Patel Nagar", "Shadipur");
delhiMetro.addConnection("Shadipur", "Kirti Nagar");
delhiMetro.addConnection("Kirti Nagar", "Moti Nagar");
delhiMetro.addConnection("Moti Nagar", "Ramesh Nagar");
delhiMetro.addConnection("Ramesh Nagar", "Rajouri Garden");
delhiMetro.addConnection("Rajouri Garden", "Tagore Garden");
delhiMetro.addConnection("Tagore Garden", "Subhash Nagar");
delhiMetro.addConnection("Subhash Nagar", "Tilak Nagar");
delhiMetro.addConnection("Tilak Nagar", "Janakpuri East");
delhiMetro.addConnection("Janakpuri East", "Janakpuri West");
delhiMetro.addConnection("Janakpuri West", "Uttam Nagar East");
delhiMetro.addConnection("Uttam Nagar East", "Uttam Nagar West");
delhiMetro.addConnection("Uttam Nagar West", "Nawada");
delhiMetro.addConnection("Nawada", "Dwarka Mor");
delhiMetro.addConnection("Dwarka Mor", "Dwarka");
delhiMetro.addConnection("Dwarka", "Dwarka Sector 14");
delhiMetro.addConnection("Dwarka Sector 14", "Dwarka Sector 13");
delhiMetro.addConnection("Dwarka Sector 13", "Dwarka Sector 12");
delhiMetro.addConnection("Dwarka Sector 12", "Dwarka Sector 11");
delhiMetro.addConnection("Dwarka Sector 11", "Dwarka Sector 10");
delhiMetro.addConnection("Dwarka Sector 10", "Dwarka Sector 9");
delhiMetro.addConnection("Dwarka Sector 9", "Dwarka Sector 8");
delhiMetro.addConnection("Dwarka Sector 8", "Dwarka Sector 7");
delhiMetro.addConnection("Dwarka Sector 7", "Dwarka Sector 6");
delhiMetro.addConnection("Dwarka Sector 6", "Dwarka Sector 5");

    int choice = 0;
    while (true) {
        cout << "Menu:\n";
        cout << "1. Add Station\n";
        cout << "2. Add Connection\n";
        cout << "3. Find Shortest Path\n";
        cout << "4. Remove Station\n";
        cout << "5. Count Stations\n";
        cout << "6. Check Station Existence\n";
        cout << "7. Calculate Fare and Time\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string stationName;
                cout << "Enter station name to add: ";
                cin.ignore();
                getline(cin, stationName);
                delhiMetro.addStation(stationName);
                cout << "Station added successfully.\n";
                break;
            }
            case 2: {
                string station1, station2;
                cout << "Enter station 1: ";
                cin.ignore();
                getline(cin, station1);
                cout << "Enter station 2: ";
                getline(cin, station2);
                delhiMetro.addConnection(station1, station2);
                cout << "Connection added successfully.\n";
                break;
            }
            case 3: {
                string start, end;
                cout << "Enter starting station: ";
                cin.ignore();
                getline(cin, start);
                cout << "Enter ending station: ";
                getline(cin, end);
                
                vector<string> path = delhiMetro.shortestPath(start, end);
                if (path.empty()) {
                    cout << "No path found.\n";
                } else {
                    cout << "Shortest path: ";
                    for (size_t i = 0; i < path.size(); ++i) {
                        cout << path[i];
                        if (i < path.size() - 1) {
                            cout << " -> ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                string stationToRemove;
                cout << "Enter station name to remove: ";
                cin.ignore();
                getline(cin, stationToRemove);
                delhiMetro.removeStation(stationToRemove);
                cout << "Station removed successfully.\n";
                break;
            }
            case 5: {
                cout << "Total stations: " << delhiMetro.countStations() << endl;
                break;
            }
            case 6: {
                string stationToCheck;
                cout << "Enter station name to check existence: ";
                cin.ignore();
                getline(cin, stationToCheck);
                if (delhiMetro.stationExists(stationToCheck)) {
                    cout << "Station exists.\n";
                } else {
                    cout << "Station does not exist.\n";
                }
                break;
            }
            case 7: {
                string start, end;
                cout << "Enter starting station: ";
                cin.ignore();
                getline(cin, start);
                cout << "Enter ending station: ";
                getline(cin, end);
                
                vector<string> path = delhiMetro.shortestPath(start, end);
                if (path.empty()) {
                    cout << "No path found.\n";
                } else {
                    cout << "Shortest path: ";
                    for (size_t i = 0; i < path.size(); ++i) {
                        cout << path[i];
                        if (i < path.size() - 1) {
                            cout << " -> ";
                        }
                    }
                    cout << endl;

                    int numStations = path.size() - 1;
                    double totalFare = numStations * FARE_PER_STATION;
                    int totalTime = numStations * TIME_PER_STATION;

                    cout << "Estimated Fare: Rs." << totalFare << endl;
                    cout << "Estimated Time: " << totalTime << " minutes\n";
                }
                break;
            }
            case 8: {
                cout << "Exiting...\n";
                return 0;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
            }
        }
    }

    return 0;
}