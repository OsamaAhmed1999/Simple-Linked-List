#include <iostream>
using namespace std;

class list
{
  public:
  list()
  {
    this->value = 0;
    this->next = NULL;
  }
  list(int value)
  {
    this->value = value;
    this->next = NULL;
  }
  void insert(list **start , int value)
  {
    list *ptr;
    ptr = new list(value);
    if(*start == NULL)
    {
      *start = ptr;
    }
    else
    {
      list *curr = *start;
      while(curr->next != NULL)
      {
        curr = curr->next;
      }
      curr->next = ptr;
    }
  }

  void search(list *start , int value)
  {
    if(start == NULL)
    {
      cout << "Empty List";
    }
    else
    {
      list *curr = start;
      while(curr->value != NULL)
      {
        if(curr->value == value)
        {
          cout << "\nFound" << endl;
          break;
        }
        curr = curr->next;
        if(curr == NULL)
        {
          cout << "Not Found" << endl;
          break;
        }
      }
    }
  }

  void del(list **start , int value)
  {
    list *curr = *start;
    list *prev;
    if((*start)->value == value)
    {
      *start = (*start)->next;
      free(start);
    }
    else
    {
      curr = (*start)->next;
      prev = *start;
      while(curr->value != value)
      {
        curr = curr->next;
        prev = prev->next;
      }
      prev->next = curr->next;
      free(curr);
    }
  }

  void print(list *start)
  {
    if(start == NULL)
    {
      cout << "Empty List" << endl;
    }
    else
    {
      list *curr = start;
      while(curr->value != NULL)
      {
        cout << curr->value << endl;
        curr = curr->next;
        if(curr == NULL)
        {
          break;
        }
      }
    }
  }

  private:
  int value;
  list *next;

};