package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolylineListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolylineList emptyInstance = new PolylineList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
