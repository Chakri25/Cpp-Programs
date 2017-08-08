#ifndef MOTHER_H
#define MOTHER_H


class Mother
{
    public:
        int publicvar;
        Mother();
        virtual ~Mother();
        void sayName();

    protected:
        int protectedvar;

    private:
        int privatevar;
};

#endif // MOTHER_H
