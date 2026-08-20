# GetCoinCharacCreate

`_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv`

`WongWork::CEventMgr::GetCoinCharacCreate()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848f002` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f002  _ZN8WongWork9CEventMgr19GetCoinCharacCreateEv
#           WongWork::CEventMgr::GetCoinCharacCreate()
# range [0x0848f002, 0x0848f06d]
0848f002 +0x00:  push   %ebp
0848f003 +0x01:  mov    %esp,%ebp
0848f005 +0x03:  sub    $0x28,%esp
0848f008 +0x06:  movl   $0x5,-0x10(%ebp)
0848f00f +0x0d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0848f014 +0x12:  movl   $0x5,0x4(%esp)
0848f01c +0x1a:  mov    %eax,(%esp)
0848f01f +0x1d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0848f024 +0x22:  mov    %eax,-0xc(%ebp)
0848f027 +0x25:  cmpl   $0x0,-0xc(%ebp)
0848f02b +0x29:  je     0848f052 <+0x50>
0848f02d +0x2b:  mov    -0xc(%ebp),%eax
0848f030 +0x2e:  mov    (%eax),%eax
0848f032 +0x30:  add    $0x34,%eax
0848f035 +0x33:  mov    (%eax),%edx
0848f037 +0x35:  mov    -0xc(%ebp),%eax
0848f03a +0x38:  movl   $0x0,0x4(%esp)
0848f042 +0x40:  mov    %eax,(%esp)
0848f045 +0x43:  call   *%edx
0848f047 +0x45:  test   %al,%al
0848f049 +0x47:  je     0848f052 <+0x50>
0848f04b +0x49:  mov    $0x1,%eax
0848f050 +0x4e:  jmp    0848f057 <+0x55>
0848f052 +0x50:  mov    $0x0,%eax
0848f057 +0x55:  test   %al,%al
0848f059 +0x57:  je     0848f069 <+0x67>
0848f05b +0x59:  mov    -0xc(%ebp),%eax
0848f05e +0x5c:  mov    %eax,(%esp)
0848f061 +0x5f:  call   0848f200 <_GLOBAL__I__ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0x1c>  ; global constructors keyed to WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)+0x1c
0848f066 +0x64:  mov    %eax,-0x10(%ebp)
0848f069 +0x67:  mov    -0x10(%ebp),%eax
0848f06c +0x6a:  leave
0848f06d +0x6b:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::GetCoinCharacCreate @ 0x848f002

/* WongWork::CEventMgr::GetCoinCharacCreate() */

undefined4 WongWork::CEventMgr::GetCoinCharacCreate(void)

{
  bool bVar1;
  char cVar2;
  CCoinEventOnCharCreate *this;
  undefined4 local_14;
  
  local_14 = 5;
  this = (CCoinEventOnCharCreate *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,5);
  if (this != (CCoinEventOnCharCreate *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0848f057;
    }
  }
  bVar1 = false;
LAB_0848f057:
  if (bVar1) {
    local_14 = CCoinEventOnCharCreate::GetCoinNoOnCreateCharac(this);
  }
  return local_14;
}
```
