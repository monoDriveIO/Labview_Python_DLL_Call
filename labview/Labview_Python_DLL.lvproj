<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="18008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Dll2.dll" Type="Document" URL="/&lt;userlib&gt;/Dll2/Dll2.dll"/>
		<Item Name="Get Sphere S Aand Vol.vi" Type="VI" URL="../Get Sphere S Aand Vol.vi"/>
		<Item Name="test_dll.vi" Type="VI" URL="../test_dll.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="Labview_to_DLL.dll" Type="Document" URL="../../vs/Debug/Labview_to_DLL.dll"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
