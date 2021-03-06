package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloodRenderBlockClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloodRenderBlock emptyInstance = new FloodRenderBlock(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
