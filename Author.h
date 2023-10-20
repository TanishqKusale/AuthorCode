#include<iostream>

 class Author {

		private int id;
		private String bookname;
		private String authorname;
		private double price;
	public Author() {}
	
	public Author(int id,String bookname,String authorname,double price)
	{
		this->id = id;
		this->bookname = bookname;
		this->authorname = authorname;
		this->price = price;
	}
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getBookname() {
		return bookname;
	}
	public void setBookname(String bookname) {
		this.bookname = bookname;
	}
	public String getAuthorname() {
		return authorname;
	}
	public void setAuthorname(String authorname) {
		this.authorname = authorname;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	
	public void Count()
	{
		cout<<----------Count Function-------<<endl;
	}
	
	public void newbooks()
	{
		cout<<-----------New book----------<<endl;
	}
	}
	}

};

