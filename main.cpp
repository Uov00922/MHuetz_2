#include <iostream>
#include "date.hpp"

int main() {

  std::cout << "Enter the dates in year month day format, one per line. To finish, enter the date 0 0 0.";

  int yy, mm, dd;
  int i = 0;
  date dates[20];
  date storeDates[20];

  std::cin >> yy >> mm >> dd;
  while (yy != 0 && mm != 0 && dd != 0) {
    dates[i].askYear(yy);
    dates[i].askMonth(mm);
    dates[i].askDay(dd);
    storeDates[i].askYear(yy);
    storeDates[i].askMonth(mm);
    storeDates[i].askDay(dd);
    i++;
    std::cin >> yy >> mm >> dd;
  }

  std::cout << "\n";
  int DayNumber[i];
  for (int j = 0; j < i; j++) {
    DayNumber[j] = dates[j].inTotalDays();
  }
  
  for (int s = 0; s < i; s++) {
    int x = s;
    int fromstart = DayNumber[x];
    for (int s2 = s + 1; s2 < i; s2++) {
      if (DayNumber[s2] < fromstart) {
        fromstart = DayNumber[s2];
        x = s2;
      }
    }
    DayNumber[x] = DayNumber[s];
    DayNumber[s] = fromstart;
  }
 
  for (int n = 0; n < i; n++) {
    for (int v = 0; v < i; v++) {
      if (DayNumber[n] == storeDates[v].inTotalDays()) {
        storeDates[v].outDate();
        std::cout << DayNumber[n] << "\n";
      }
    }
  }

  return 0;
}