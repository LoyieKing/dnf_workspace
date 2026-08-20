# IsChildrensDayEventing

`_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv`

`WongWork::CEventMgr::IsChildrensDayEventing()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848f140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f140  _ZN8WongWork9CEventMgr22IsChildrensDayEventingEv
#           WongWork::CEventMgr::IsChildrensDayEventing()
# range [0x0848f140, 0x0848f1a3]
0848f140 +0x00:  push   %ebp
0848f141 +0x01:  mov    %esp,%ebp
0848f143 +0x03:  sub    $0x38,%esp
0848f146 +0x06:  movl   $0x0,0x20(%esp)
0848f14e +0x0e:  movl   $0x6,0x1c(%esp)
0848f156 +0x16:  movl   $0x8,0x18(%esp)
0848f15e +0x1e:  movl   $0x5,0x14(%esp)
0848f166 +0x26:  movl   $0x7d6,0x10(%esp)
0848f16e +0x2e:  movl   $0x6,0xc(%esp)
0848f176 +0x36:  movl   $0x5,0x8(%esp)
0848f17e +0x3e:  movl   $0x5,0x4(%esp)
0848f186 +0x46:  movl   $0x7d6,(%esp)
0848f18d +0x4d:  call   0848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>  ; WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)
0848f192 +0x52:  test   %al,%al
0848f194 +0x54:  je     0848f19d <+0x5d>
0848f196 +0x56:  mov    $0x1,%eax
0848f19b +0x5b:  jmp    0848f1a2 <+0x62>
0848f19d +0x5d:  mov    $0x0,%eax
0848f1a2 +0x62:  leave
0848f1a3 +0x63:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::IsChildrensDayEventing @ 0x848f140

/* WongWork::CEventMgr::IsChildrensDayEventing() */

bool WongWork::CEventMgr::IsChildrensDayEventing(void)

{
  char cVar1;
  
  cVar1 = _IsEventing(0x7d6,5,5,6,0x7d6,5,8,6,0);
  return cVar1 != '\0';
}
```
