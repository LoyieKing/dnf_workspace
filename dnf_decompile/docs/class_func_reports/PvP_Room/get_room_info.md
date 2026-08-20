# get_room_info

`_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO`

`PvP_Room::get_room_info(PVP_ROOM_INFO*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9296` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9296  _ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO
#           PvP_Room::get_room_info(PVP_ROOM_INFO*)
# range [0x085d9296, 0x085d92fb]
085d9296 +0x00:  push   %ebp
085d9297 +0x01:  mov    %esp,%ebp
085d9299 +0x03:  sub    $0x18,%esp
085d929c +0x06:  mov    0x8(%ebp),%eax
085d929f +0x09:  lea    0x9(%eax),%edx
085d92a2 +0x0c:  mov    0xc(%ebp),%eax
085d92a5 +0x0f:  mov    %edx,0x4(%esp)
085d92a9 +0x13:  mov    %eax,(%esp)
085d92ac +0x16:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
085d92b1 +0x1b:  mov    0x8(%ebp),%eax
085d92b4 +0x1e:  movzbl 0x8(%eax),%edx
085d92b8 +0x22:  mov    0xc(%ebp),%eax
085d92bb +0x25:  mov    %dl,0x4(%eax)
085d92be +0x28:  mov    0x8(%ebp),%eax
085d92c1 +0x2b:  movzwl 0x5c4(%eax),%edx
085d92c8 +0x32:  mov    0xc(%ebp),%eax
085d92cb +0x35:  mov    %dx,0x6(%eax)
085d92cf +0x39:  mov    0x8(%ebp),%eax
085d92d2 +0x3c:  movzbl 0x604(%eax),%edx
085d92d9 +0x43:  mov    0xc(%ebp),%eax
085d92dc +0x46:  mov    %dl,0x8(%eax)
085d92df +0x49:  mov    0x8(%ebp),%eax
085d92e2 +0x4c:  lea    0x605(%eax),%edx
085d92e8 +0x52:  mov    0xc(%ebp),%eax
085d92eb +0x55:  add    $0xc,%eax
085d92ee +0x58:  mov    %edx,0x4(%esp)
085d92f2 +0x5c:  mov    %eax,(%esp)
085d92f5 +0x5f:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
085d92fa +0x64:  leave
085d92fb +0x65:  ret
```

## 反编译 C

```c
// PvP_Room::get_room_info @ 0x85d9296

/* PvP_Room::get_room_info(PVP_ROOM_INFO*) */

void __thiscall PvP_Room::get_room_info(PvP_Room *this,PVP_ROOM_INFO *param_1)

{
  std::string::operator=((string *)param_1,(char *)(this + 9));
  *(PvP_Room *)(param_1 + 4) = this[8];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(this + 0x5c4);
  *(PvP_Room *)(param_1 + 8) = this[0x604];
  std::string::operator=((string *)(param_1 + 0xc),(char *)(this + 0x605));
  return;
}
```
