#pragma once
#include "xiayuObject.h"

namespace xiayuLib
{
	template<typename T1, typename T2, typename T3, typename T4,
		typename T5, typename T6, typename T7, typename T8, typename RESULT>
	class Func8 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3, T4, T5, T6, T7, T8);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func8& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func8& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2 , T3 t3, T4 t4, T5 t5, T6 t6, T7 t7, T8 t8)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1, t2, t3,t4,t5,t6,t7,t8);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename T3, typename T4,
		typename T5, typename T6, typename T7, typename RESULT>
	class Func7 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3, T4, T5, T6, T7);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func7& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func7& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2 , T3 t3, T4 t4, T5 t5, T6 t6, T7 t7)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1,t2,t3,t4,t5,t6,t7);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename T3, typename T4,
		typename T5, typename T6, typename RESULT>
	class Func6 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3, T4, T5, T6);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func6& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func6& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2 , T3 t3, T4 t4, T5 t5, T6 t6)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1,t2,t3,t4,t5,t6);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename T3, typename T4,
		typename T5, typename RESULT>
	class Func5 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3, T4, T5);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func5& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func5& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2 , T3 t3, T4 t4, T5 t5)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1,t2,t3,t4,t5);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename T3, typename T4, typename RESULT>
	class Func4 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3, T4);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func4& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func4& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2, T3 t3, T4 t4)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1,t2,t3,t4);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename T3, typename RESULT>
	class Func3 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2, T3);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func3& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func3& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2, T3 t3)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i]();
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename T2, typename RESULT>
	class Func2 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1, T2);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func2& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func2& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1, T2 t2)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1, t2);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename T1, typename RESULT>
	class Func1 : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(T1);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func1& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Func1& operator-=(fn f)
		{
			remove(f);
			return this;
		}
		void operator() (T1 t1)
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i](t1);
			}
		}
	protected:
	private:
		vector<fn> t; 
	};

	template<typename RESULT>
	class Func1<void, RESULT> : public xiayuObject
	{
	private:
		typedef RESULT (*fn)(void);
	public:
		void add(fn f)
		{
			t.push_back(f);
		}
		void remove(fn f)
		{
			for (int i = 0; i < t.size(); i++)
			{
				if (t[i] == f)
				{
					t.erase(t.begin()+i);
				}
			}
		}
		Func1& operator+=(fn f)
		{
			t.push_back(f);
			return *this;
		}
		Func1& operator-=(fn f)
		{
			remove(f);
			return *this;
		}
		operator Func1()
		{
			for (int i = t.size()-1; i >= 0; i--)
			{
				t[i]();
			}
		}
	protected:
	private:
		vector<fn> t; 
	};
}