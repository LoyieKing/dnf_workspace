# IsPCRoomEventing

`_ZN8WongWork9CEventMgr16IsPCRoomEventingEv`

`WongWork::CEventMgr::IsPCRoomEventing()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848f0dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f0dc  _ZN8WongWork9CEventMgr16IsPCRoomEventingEv
#           WongWork::CEventMgr::IsPCRoomEventing()
# range [0x0848f0dc, 0x0848f13f]
0848f0dc +0x00:  push   %ebp
0848f0dd +0x01:  mov    %esp,%ebp
0848f0df +0x03:  sub    $0x38,%esp
0848f0e2 +0x06:  movl   $0x0,0x20(%esp)
0848f0ea +0x0e:  movl   $0x6,0x1c(%esp)
0848f0f2 +0x16:  movl   $0x7,0x18(%esp)
0848f0fa +0x1e:  movl   $0x2,0x14(%esp)
0848f102 +0x26:  movl   $0x7d6,0x10(%esp)
0848f10a +0x2e:  movl   $0x0,0xc(%esp)
0848f112 +0x36:  movl   $0x18,0x8(%esp)
0848f11a +0x3e:  movl   $0x1,0x4(%esp)
0848f122 +0x46:  movl   $0x7d6,(%esp)
0848f129 +0x4d:  call   0848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>  ; WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)
0848f12e +0x52:  test   %al,%al
0848f130 +0x54:  je     0848f139 <+0x5d>
0848f132 +0x56:  mov    $0x1,%eax
0848f137 +0x5b:  jmp    0848f13e <+0x62>
0848f139 +0x5d:  mov    $0x0,%eax
0848f13e +0x62:  leave
0848f13f +0x63:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::IsPCRoomEventing @ 0x848f0dc

/* WongWork::CEventMgr::IsPCRoomEventing() */

bool WongWork::CEventMgr::IsPCRoomEventing(void)

{
  char cVar1;
  
  cVar1 = _IsEventing(0x7d6,1,0x18,0,0x7d6,2,7,6,0);
  return cVar1 != '\0';
}
```
