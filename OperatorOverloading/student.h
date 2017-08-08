#ifndef STUDENT_H
#define STUDENT_H


class student
{
    public:
        student(int);
        student();
        virtual ~student();

        int totalmarks;
        student operator+(student);

    protected:

    private:
};

#endif // STUDENT_H
