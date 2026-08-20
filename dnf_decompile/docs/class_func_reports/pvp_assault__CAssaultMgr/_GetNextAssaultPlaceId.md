# _GetNextAssaultPlaceId

`_ZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEv`

`pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ed976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed976  _ZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEv
#           pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId()
# range [0x082ed976, 0x082ed9fd]
082ed976 +0x00:  push   %ebp
082ed977 +0x01:  mov    %esp,%ebp
082ed979 +0x03:  push   %ebx
082ed97a +0x04:  sub    $0x24,%esp
082ed97d +0x07:  mov    0x8(%ebp),%eax
082ed980 +0x0a:  mov    0x4(%eax),%eax
082ed983 +0x0d:  lea    0x1(%eax),%edx
082ed986 +0x10:  mov    0x8(%ebp),%eax
082ed989 +0x13:  mov    %edx,0x4(%eax)
082ed98c +0x16:  mov    0x8(%ebp),%eax
082ed98f +0x19:  mov    0x4(%eax),%eax
082ed992 +0x1c:  test   %eax,%eax
082ed994 +0x1e:  jne    082ed9f2 <+0x7c>
082ed996 +0x20:  mov    &_ZZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEvE5count,%eax
082ed99b +0x25:  add    $0x1,%eax
082ed99e +0x28:  mov    %eax,&_ZZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEvE5count
082ed9a3 +0x2d:  mov    &_ZZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEvE5count,%ebx
082ed9a9 +0x33:  movl   $0x0,0xc(%esp)
082ed9b1 +0x3b:  movl   $0x1085,0x8(%esp)
082ed9b9 +0x43:  movl   $&_ZZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ed9c1 +0x4b:  lea    -0x18(%ebp),%eax
082ed9c4 +0x4e:  mov    %eax,(%esp)
082ed9c7 +0x51:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ed9cc +0x56:  mov    %ebx,0x8(%esp)
082ed9d0 +0x5a:  movl   $"NEXT_ASSAULT_PLACE_ID overflow count(%d)",0x4(%esp)
082ed9d8 +0x62:  lea    -0x18(%ebp),%eax
082ed9db +0x65:  mov    %eax,(%esp)
082ed9de +0x68:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ed9e3 +0x6d:  mov    0x8(%ebp),%eax
082ed9e6 +0x70:  mov    0x4(%eax),%eax
082ed9e9 +0x73:  lea    0x1(%eax),%edx
082ed9ec +0x76:  mov    0x8(%ebp),%eax
082ed9ef +0x79:  mov    %edx,0x4(%eax)
082ed9f2 +0x7c:  mov    0x8(%ebp),%eax
082ed9f5 +0x7f:  mov    0x4(%eax),%eax
082ed9f8 +0x82:  add    $0x24,%esp
082ed9fb +0x85:  pop    %ebx
082ed9fc +0x86:  pop    %ebp
082ed9fd +0x87:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId @ 0x82ed976

/* pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId() */

undefined4 __thiscall pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId(CAssaultMgr *this)

{
  int iVar1;
  cMyTrace local_1c [20];
  
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  if (*(int *)(this + 4) == 0) {
    iVar1 = _GetNextAssaultPlaceId()::count + 1;
    _GetNextAssaultPlaceId()::count = iVar1;
    cMyTrace::cMyTrace(local_1c,"unsigned int pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId()",
                       0x1085,0);
    cMyTrace::operator()(local_1c,"NEXT_ASSAULT_PLACE_ID overflow count(%d)",iVar1);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
  }
  return *(undefined4 *)(this + 4);
}
```
