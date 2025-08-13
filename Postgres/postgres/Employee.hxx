#pragma once
#include <string>
#include <odb/core.hxx>

#pragma db object   // keep same table name in DB
class Employee
{
public:
    Employee() = default;

    Employee(const std::string& name)
        : id_(0), name_(name)
    {
    }

    // --- Getters ---
    unsigned long getId() const
    {
        return id_;
    }

    const std::string& getName() const
    {
        return name_;
    }

    // --- Setters ---
    void setId(unsigned long id)
    {
        id_ = id;
    }

    void setName(const std::string& name)
    {
        name_ = name;
    }

private:
#pragma db id auto
    unsigned long id_;

    std::string name_;
};
