#pragma once
class WorldGLConverter
{
	
public:
	

	WorldGLConverter();
	~WorldGLConverter();
	static void init(int x, int y, int top, int depth);
	/**
	return the given float corresponding width
	*/
	float operator<<(int);
	/**
	return the given float corresponding height
	*/
	float operator<(int);

	/**
	return the given float corresponding height
	*/
	float operator<<(float);
	/**
	return the given float corresponding width
	*/
	float operator<(float);

	static int WindowWidth;
	static int WindowHeight;
	static int WindowTopBorder;//UI needs 
	static int WindowDepth;//
};

