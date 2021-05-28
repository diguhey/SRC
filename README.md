# Building GunZ SRC
Use SRC Base 2019 https://github.com/ZER0NIS/Gunz-Base and updated, edit, custom by Century VN.

## Windows:
Requisites:

* Visual Studio 2019 withATL/MFC support. You can download the free Community edition at https://www.visualstudio.com/downloads/. In the installer, select the "Desktop development with C++," and on the right under "Summary," select "MFC and ATL support (x86 and x64)." Picture here).
* Build with USA_Release_Publish


### TODO'S
* Done:
	- Fix toggle, fix resolution, màn hình rộng.
	- Edit mở rộng thêm ô Custom I, II ... trong phần option > video..
	- Edit lại số lượng người tham gia phòng và thời gian trận đấu.
	- Thêm check box show hpap, exp, fullscreen.
	- Edit lặt vặt: cuối round vẫn có thể biểu cảm, fix lỗi spawn trong the duel.
	- Fix 60fps chơi ở dạng cửa sổ.
	- Fix hell climb.
	- Fix hiển thị đúng số lượng người trên server.
	- Edit hiển thị tên map ngoài lobby.
	- Edit thêm hiển thị tên qtv.
	- Fix checkbox remember password, auto chọn server.
	- Fix server mode: clan.
	- Edit cuối xuống nhân vật không bị mờ.
	- Edit tag [name] = ESP, [ia] = infinite ammo, [hpap] = 150HP/150AP, [sgo] = 120HP/120AP, [spo] = 150HP/150HP, [ns] = no sword, [ni] = no item, [ng] = no gun,....
	- Ctrl F, G hiển thị hpap, fps.
	- Ẩn mode survival.
	- Fix limit item.
	- Fix Team Deathmatch and Team games with solo game spawns.
	- Đăng nhập vào thẳng màn hình nhân vật.
	- Edit hiển thị duel match map chỉ khi map.xml bOnlyDuelMap = "true"> được set.
	- Fix Limit FPS. 
	- Fix shop jump.
	- Remove camera scroll for staff


* Unfinished, bug, ...:
	- Tag [r] (không reload) không hoạt động. Còn 1 số tag room chưa add.
	- Chưa add thêm bất cứ command nào mới.
	- Chưa fix tâm sniper.
	- Đã add xong các grade. Vẫn lỗi hiển thị tên ở lobby và phòng chờ trước khi vào game.
	- Không hiển thị shop trong phòng chờ game.
	- DB clean chưa fix gì trong đó. Chỉ mới add Grade đầy đủ.