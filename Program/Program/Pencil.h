#pragma once
#include "Paint.h"

class Pencil : public Paint
{
public:
    virtual void draw() override;

    virtual ~Pencil() override;
};