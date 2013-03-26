#pragma once
#include "xiayuObject.h"

namespace xiayuLib
{
	template<typename T1, typename T2, typename T3, typename T4,
		typename T5, typename T6, typename T7, typename T8>
	class Action8 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3, T4, T5, T6, T7, T8);
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
		Action8& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action8& operator-=(fn f)
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
		typename T5, typename T6, typename T7>
	class Action7 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3, T4, T5, T6, T7);
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
		Action7& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action7& operator-=(fn f)
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
		typename T5, typename T6>
	class Action6 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3, T4, T5, T6);
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
		Action6& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action6& operator-=(fn f)
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
		typename T5>
	class Action5 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3, T4, T5);
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
		Action5& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action5& operator-=(fn f)
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

	template<typename T1, typename T2, typename T3, typename T4>
	class Action4 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3, T4);
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
		Action4& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action4& operator-=(fn f)
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

	template<typename T1, typename T2, typename T3>
	class Action3 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2, T3);
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
		Action3& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action3& operator-=(fn f)
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

	template<typename T1, typename T2>
	class Action2 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1, T2);
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
		Action2& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action2& operator-=(fn f)
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

	template<typename T1>
	class Action1 : public xiayuObject
	{
	private:
		typedef void (*fn)(T1);
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
		Action1& operator+=(fn f)
		{
			t.push_back(f);
			return this;
		}
		Action1& operator-=(fn f)
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

	template<>
	class Action1<void> : public xiayuObject
	{
	private:
		typedef void (*fn)(void);
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
		Action1& operator+=(fn f)
		{
			t.push_back(f);
			return *this;
		}
		Action1& operator-=(fn f)
		{
			remove(f);
			return *this;
		}
		operator Action1()
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