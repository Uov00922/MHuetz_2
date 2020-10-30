#pragma once

class date {
  private:
    int day;
    int month;
    int year;
  public:
    date();
    date(int dd, int mm, int yy);
    ~date();
    void askDay(int dd);
    void askMonth(int mm);
    void askYear(int yy);
    void outDate();
    int inTotalDays();
    void outTotalDays();
    void inWeekday();
    int inDay();
    int inMonth();
    int inYear();

};