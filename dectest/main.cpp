extern "C"
{
#include <ultrajson.h>
}

#include <windows.h>
#include <string>
#include <map>
#include <list>
#include <assert.h>
#include <time.h>

//char indata[] = "[[{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]], [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]], [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]], [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]], [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]], [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, [{\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}, {\"username\": \"johndoe\", \"jobs\": [1, 2], \"isAuthorized\": true, \"userId\": 3381293, \"currJob\": null, \"approval\": 31.147099999999998, \"fullname\": \"John Doe the Second\"}]]]";
//char indata[] = "[[[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]] ]";
//char indata[] = "[[[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]], [[[]]] ]";
char indata[] = "[[[[]]]]";

using namespace std;

class BaseObject
{
private:
	JSTYPES m_type;
	int m_cRef;

public:

	BaseObject (JSTYPES _type)
	{
		m_type = _type;
		m_cRef = 1;
	}

	virtual ~BaseObject()
	{
	}
	
	JSTYPES getType(void)
	{
		return m_type;
	}

	virtual void print(int level, FILE *file) = 0;

	virtual void iterBegin(JSONTypeContext *tc)
	{
		assert (false);
	}

	virtual int iterNext(JSONTypeContext *tc)
	{
		assert (false);
		return 0;
	}

	void iterEnd(JSONTypeContext *tc)
	{
	}

	virtual JSOBJ iterGetValue(JSONTypeContext *tc)
	{
		assert (false);
		return NULL;
	}

	virtual char *iterGetName(JSONTypeContext *tc, size_t *outLen)
	{
		assert (false);
		return NULL;
	}

	void decRef()
	{
		m_cRef --;

		if (m_cRef == 0)
		{
			delete this;
		}
	}

	void incRef()
	{
		m_cRef ++;
	}

};

class StringObject : public BaseObject
{
	string m_value;

public:
	StringObject(char *start, char *end) : BaseObject(JT_UTF8)
	{
		m_value = string (start, end - start);
	}

	const string &getValue()
	{
		return m_value;
	}

	void print(int level, FILE *file)
	{
		fprintf (file, "\"%s\"", m_value.c_str ());
	}
};

class IntegerObject : public BaseObject
{
	JSLONG m_value;

public:
	IntegerObject(JSLONG _value) : BaseObject(JT_INTEGER)
	{
		m_value = _value;
	}

	void print(int level, FILE *file)
	{
		fprintf (file, "%ld", m_value);
	}

	JSLONG getValue()
	{
		return m_value;
	}

};

class DoubleObject : public BaseObject
{
	double m_value;

public:
	DoubleObject(double _value) : BaseObject(JT_DOUBLE)
	{
		m_value = _value;
	}

	void print(int level, FILE *file)
	{
		fprintf (file, "%f", m_value);
	}

	double getValue()
	{
		return m_value;
	}


};


class BoolObject : public BaseObject
{
	bool m_value;

public:
	BoolObject(bool _value, JSTYPES _type) : BaseObject(_type)
	{
		m_value = _value;
	}

	void print(int level, FILE *file)
	{
		fprintf (file, "%s", m_value ? "true" : "false");
	}
};

class NullObject : public BaseObject
{
public:
	NullObject() : BaseObject(JT_NULL)
	{
	}

	void print(int level, FILE *file)
	{
		fprintf (file, "null");
	}
};

class MapObject : public BaseObject
{
	map<StringObject *, BaseObject *> m_map;
	map<StringObject *, BaseObject *>::iterator m_iter;
	int m_iterCount;

public:
	MapObject() : BaseObject(JT_OBJECT)
	{
	}

	~MapObject()
	{
		for (map<StringObject *, BaseObject *>::iterator iter = m_map.begin(); iter != m_map.end(); iter ++)
		{
			(iter->first)->decRef();
			(iter->second)->decRef();
		}

	}

	void addKey (StringObject *name, BaseObject *item)
	{
		m_map[name] = item;
	}

	void print(int level, FILE *file)
	{
		int count = 0;

		fprintf (file, "{");

		for (map<StringObject *, BaseObject *>::iterator iter = m_map.begin(); iter != m_map.end(); iter ++)
		{
			if (count > 0)
			{
				fprintf (file, ", ");
			}

			StringObject *key = iter->first;
			BaseObject *obj = iter->second;

			key->print(level, file);
			fprintf (file, ": ");
			obj->print(level + 1, file);
			count ++;
		}

		fprintf (file, "}");

	}

	virtual void iterBegin(JSONTypeContext *tc)
	{
		m_iter = m_map.begin();
		m_iterCount = 0;
	}

	virtual int iterNext(JSONTypeContext *tc)
	{
		if (m_iterCount == 0)
		{
			m_iter = m_map.begin();

			if (m_iter == m_map.end())
			{
				return 0;
			}

			m_iterCount ++;
			return 1;
		}

		m_iter ++;

		if (m_iter == m_map.end())
		{
			return 0;
		}
		return 1;
	}

	virtual JSOBJ iterGetValue(JSONTypeContext *tc)
	{
		return m_iter->second;
	}

	virtual char *iterGetName(JSONTypeContext *tc, size_t *outLen)
	{
		*outLen = m_iter->first->getValue().size();
		return (char *) m_iter->first->getValue().c_str(); 
	}



};

class ListObject : public BaseObject
{
	list<BaseObject *> m_list;
	list<BaseObject *>::iterator m_iter;
	int m_iterCount;

public:
	ListObject() : BaseObject(JT_ARRAY)
	{
	}

	~ListObject()
	{
		for (list<BaseObject *>::iterator iter = m_list.begin(); iter != m_list.end(); iter ++)
		{
			(*iter)->decRef();
		}
	}

	void addItem(BaseObject *item)
	{
		m_list.push_back(item);
	}

	void print(int level, FILE *file)
	{
		int count = 0;

		fprintf (file, "[");

		for (list<BaseObject *>::iterator iter = m_list.begin(); iter != m_list.end(); iter ++)
		{
			if (count > 0)
			{
				fprintf (file, ", ");
			}
			BaseObject *obj = *iter;
			obj->print(level + 1, file);
			count ++;
		}

		fprintf (file, "]");
	}
	
	virtual void iterBegin(JSONTypeContext *tc)
	{
		m_iterCount = 0;
	}

	virtual int iterNext(JSONTypeContext *tc)
	{
		if (m_iterCount == 0)
		{
			m_iter = m_list.begin();

			if (m_iter == m_list.end())
			{
				return 0;
			}

			m_iterCount ++;
			return 1;
		}

		m_iter ++;

		if (m_iter == m_list.end())
		{
			return 0;
		}
		return 1;
	}

	virtual JSOBJ iterGetValue(JSONTypeContext *tc)
	{
		return *m_iter;
	}
};



JSOBJ Object_newString(char *start, char *end)
{
	//return (JSOBJ) 1;
	return (JSOBJ) new StringObject(start, end);
}

void Object_objectAddKey(JSOBJ obj, JSOBJ name, JSOBJ value)
{
	//return;
	((MapObject *)obj)->addKey( (StringObject *) name, (BaseObject *) value);
}

void Object_arrayAddItem(JSOBJ obj, JSOBJ value)
{
	//return;
	((ListObject *)obj)->addItem( (ListObject *) value);
}

JSOBJ Object_newTrue()
{ 
	//return (JSOBJ) 1;
	return (JSOBJ) new BoolObject(true, JT_TRUE);
}

JSOBJ Object_newFalse()
{
	//return (JSOBJ) 1;
	return (JSOBJ) new BoolObject(false, JT_FALSE);
}

JSOBJ Object_newNull()
{
	//return (JSOBJ) 1;
	return (JSOBJ) new NullObject();
}

JSOBJ Object_newObject()
{
	//return (JSOBJ) 1;
	return (JSOBJ) new MapObject();
}

JSOBJ Object_newArray()
{
	//return (JSOBJ) 1;
	return (JSOBJ) new ListObject();
}

JSOBJ Object_newInteger(JSLONG value)
{
	//return (JSOBJ) 1;
	return (JSOBJ) new IntegerObject(value);
}

JSOBJ Object_newDouble(double value)
{ 
	//return (JSOBJ) 1;
	return (JSOBJ) new DoubleObject(value);
}

void Object_beginTypeContext(JSOBJ obj, JSONTypeContext *tc)
{
	tc->type = ((BaseObject *)obj)->getType();
}

void Object_endTypeContext(JSOBJ obj, JSONTypeContext *tc)
{
}

JSLONG Object_getLongValue(JSOBJ obj, JSONTypeContext *tc)
{
	return ((IntegerObject*)obj)->getValue();
}

double Object_getDoubleValue(JSOBJ obj, JSONTypeContext *tc)
{
	return ((DoubleObject*)obj)->getValue();
}

const char *Object_getStringValue(JSOBJ obj, JSONTypeContext *tc, size_t *_outLen)
{
	const string &str = ((StringObject *) obj)->getValue();

	*_outLen = str.size();
	return str.c_str();
}

void Object_iterBegin(JSOBJ obj, JSONTypeContext *tc)
{
	((BaseObject *)obj)->iterBegin(tc);

}

int Object_iterNext(JSOBJ obj, JSONTypeContext *tc)
{
	return ((BaseObject *)obj)->iterNext(tc);
}

void Object_iterEnd(JSOBJ obj, JSONTypeContext *tc)
{
	((BaseObject *)obj)->iterEnd(tc);
}

JSOBJ Object_iterGetValue(JSOBJ obj, JSONTypeContext *tc)
{
	return ((BaseObject *)obj)->iterGetValue(tc);
}

char *Object_iterGetName(JSOBJ obj, JSONTypeContext *tc, size_t *outLen)
{
	return ((BaseObject *)obj)->iterGetName(tc, outLen);
}

void Object_releaseObject(JSOBJ obj)
{
	delete (BaseObject *) obj;
}

int main (int argc, char **argv)
{
	BaseObject *obj;
	
	JSONObjectEncoder encoder;
	encoder.getLongValue = Object_getLongValue;
	encoder.getDoubleValue = Object_getDoubleValue;
	encoder.getStringValue = Object_getStringValue;
	encoder.beginTypeContext = Object_beginTypeContext;
	encoder.endTypeContext = Object_endTypeContext;

	encoder.iterBegin = Object_iterBegin;
	encoder.iterNext = Object_iterNext;
	encoder.iterEnd = Object_iterEnd;
	encoder.iterGetValue = Object_iterGetValue;
	encoder.iterGetName = Object_iterGetName;
	encoder.releaseObject = Object_releaseObject;
	encoder.malloc = malloc;
	encoder.realloc = realloc;
	encoder.free = free;
	encoder.recursionMax = 0;

	JSONObjectDecoder decoder;
	decoder.arrayAddItem = Object_arrayAddItem;
	decoder.objectAddKey = Object_objectAddKey;
	decoder.newArray = Object_newArray;
	decoder.newObject = Object_newObject;
	decoder.newNull = Object_newNull;
	decoder.newTrue = Object_newTrue;
	decoder.newFalse = Object_newFalse;
	decoder.newInteger = Object_newInteger;
	decoder.newDouble = Object_newDouble;
	decoder.newString = Object_newString;
	decoder.malloc = malloc;
	decoder.free = free;
	decoder.realloc = realloc;
	decoder.releaseObject = Object_releaseObject;

	char buffer[65536];
	#define N 1000000


	obj = (BaseObject *) JSON_DecodeObject(&decoder, indata, sizeof (indata));

	size_t cCount = 0;

	time_t tsStart = time(0);

	while (true)
	{
		for (int index = 0; index < 1; index ++)
		{
			JSON_EncodeObject(obj, &encoder, buffer, sizeof (buffer));
			obj->decRef();
			obj = (BaseObject *) JSON_DecodeObject (&decoder, buffer, strlen(buffer));
		}

		cCount += 1;
		time_t tsNow = time(0);

		if (tsStart != tsNow)
		{
			fprintf (stderr, "%u / sec\n", cCount);
			tsStart = tsNow;
			cCount = 0;
		}
	}

	getchar();
	return 0;
}
