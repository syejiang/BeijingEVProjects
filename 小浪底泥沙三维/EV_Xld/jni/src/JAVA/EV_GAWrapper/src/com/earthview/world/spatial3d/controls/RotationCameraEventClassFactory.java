package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationCameraEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationCameraEvent emptyInstance = new RotationCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
