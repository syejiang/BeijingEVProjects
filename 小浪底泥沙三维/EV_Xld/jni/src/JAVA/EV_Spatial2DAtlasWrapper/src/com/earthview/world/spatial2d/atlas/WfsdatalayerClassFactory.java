package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsdatalayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsdatalayer emptyInstance = new Wfsdatalayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
