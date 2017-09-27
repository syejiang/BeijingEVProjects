package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmslayerfactory emptyInstance = new Wmslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
