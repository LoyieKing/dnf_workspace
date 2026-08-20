# change_manager_for_quick_party

`_ZN6CParty30change_manager_for_quick_partyEv`

`CParty::change_manager_for_quick_party()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b404  _ZN6CParty30change_manager_for_quick_partyEv
#           CParty::change_manager_for_quick_party()
# range [0x0859b404, 0x0859b52b]
0859b404 +0x000:  push   %ebp
0859b405 +0x001:  mov    %esp,%ebp
0859b407 +0x003:  sub    $0x38,%esp
0859b40a +0x006:  movl   $0x0,-0x10(%ebp)
0859b411 +0x00d:  jmp    0859b486 <+0x82>
0859b413 +0x00f:  mov    -0x10(%ebp),%edx
0859b416 +0x012:  mov    0x8(%ebp),%ecx
0859b419 +0x015:  mov    %edx,%eax
0859b41b +0x017:  add    %eax,%eax
0859b41d +0x019:  add    %edx,%eax
0859b41f +0x01b:  shl    $0x3,%eax
0859b422 +0x01e:  lea    (%ecx,%eax,1),%eax
0859b425 +0x021:  add    $0x78,%eax
0859b428 +0x024:  mov    (%eax),%edx
0859b42a +0x026:  mov    0x8(%ebp),%eax
0859b42d +0x029:  mov    0x74(%eax),%eax
0859b430 +0x02c:  cmp    %eax,%edx
0859b432 +0x02e:  jne    0859b482 <+0x7e>
0859b434 +0x030:  mov    0x8(%ebp),%eax
0859b437 +0x033:  mov    0x74(%eax),%eax
0859b43a +0x036:  movl   $0xffffffff,0x4(%esp)
0859b442 +0x03e:  mov    %eax,(%esp)
0859b445 +0x041:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b44a +0x046:  mov    -0x10(%ebp),%edx
0859b44d +0x049:  mov    0x8(%ebp),%ecx
0859b450 +0x04c:  mov    %edx,%eax
0859b452 +0x04e:  add    %eax,%eax
0859b454 +0x050:  add    %edx,%eax
0859b456 +0x052:  shl    $0x3,%eax
0859b459 +0x055:  lea    (%ecx,%eax,1),%eax
0859b45c +0x058:  add    $0x78,%eax
0859b45f +0x05b:  movl   $0x0,(%eax)
0859b465 +0x061:  mov    -0x10(%ebp),%edx
0859b468 +0x064:  mov    0x8(%ebp),%ecx
0859b46b +0x067:  mov    %edx,%eax
0859b46d +0x069:  add    %eax,%eax
0859b46f +0x06b:  add    %edx,%eax
0859b471 +0x06d:  shl    $0x3,%eax
0859b474 +0x070:  lea    (%ecx,%eax,1),%eax
0859b477 +0x073:  sub    $0xffffff80,%eax
0859b47a +0x076:  movl   $0x0,(%eax)
0859b480 +0x07c:  jmp    0859b491 <+0x8d>
0859b482 +0x07e:  addl   $0x1,-0x10(%ebp)
0859b486 +0x082:  cmpl   $0x3,-0x10(%ebp)
0859b48a +0x086:  setle  %al
0859b48d +0x089:  test   %al,%al
0859b48f +0x08b:  jne    0859b413 <+0xf>
0859b491 +0x08d:  movl   $0x0,-0xc(%ebp)
0859b498 +0x094:  jmp    0859b4ee <+0xea>
0859b49a +0x096:  mov    -0xc(%ebp),%eax
0859b49d +0x099:  mov    %eax,0x4(%esp)
0859b4a1 +0x09d:  mov    0x8(%ebp),%eax
0859b4a4 +0x0a0:  mov    %eax,(%esp)
0859b4a7 +0x0a3:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859b4ac +0x0a8:  test   %al,%al
0859b4ae +0x0aa:  je     0859b4ea <+0xe6>
0859b4b0 +0x0ac:  mov    -0xc(%ebp),%edx
0859b4b3 +0x0af:  mov    0x8(%ebp),%ecx
0859b4b6 +0x0b2:  mov    %edx,%eax
0859b4b8 +0x0b4:  add    %eax,%eax
0859b4ba +0x0b6:  add    %edx,%eax
0859b4bc +0x0b8:  shl    $0x3,%eax
0859b4bf +0x0bb:  lea    (%ecx,%eax,1),%eax
0859b4c2 +0x0be:  add    $0x78,%eax
0859b4c5 +0x0c1:  mov    (%eax),%edx
0859b4c7 +0x0c3:  mov    0x8(%ebp),%eax
0859b4ca +0x0c6:  mov    %edx,0x74(%eax)
0859b4cd +0x0c9:  mov    0x8(%ebp),%eax
0859b4d0 +0x0cc:  mov    %eax,(%esp)
0859b4d3 +0x0cf:  call   0859cdbc <_ZN6CParty8set_hostEv>  ; CParty::set_host()
0859b4d8 +0x0d4:  mov    0x8(%ebp),%eax
0859b4db +0x0d7:  mov    %eax,(%esp)
0859b4de +0x0da:  call   0859cdd2 <_ZN6CParty14send_host_infoEv>  ; CParty::send_host_info()
0859b4e3 +0x0df:  mov    $0x1,%eax
0859b4e8 +0x0e4:  jmp    0859b52a <+0x126>
0859b4ea +0x0e6:  addl   $0x1,-0xc(%ebp)
0859b4ee +0x0ea:  cmpl   $0x3,-0xc(%ebp)
0859b4f2 +0x0ee:  setle  %al
0859b4f5 +0x0f1:  test   %al,%al
0859b4f7 +0x0f3:  jne    0859b49a <+0x96>
0859b4f9 +0x0f5:  movl   $"there is no manager(party empty)",0x10(%esp)
0859b501 +0x0fd:  movl   $0x45d,0xc(%esp)
0859b509 +0x105:  movl   $&_ZZN6CParty30change_manager_for_quick_partyEvE19__PRETTY_FUNCTION__,0x8(%esp)
0859b511 +0x10d:  movl   $"party.cpp",0x4(%esp)
0859b519 +0x115:  movl   $0x1,(%esp)
0859b520 +0x11c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859b525 +0x121:  mov    $0x0,%eax
0859b52a +0x126:  leave
0859b52b +0x127:  ret
```

## 反编译 C

```c
// CParty::change_manager_for_quick_party @ 0x859b404

/* CParty::change_manager_for_quick_party() */

undefined4 __thiscall CParty::change_manager_for_quick_party(CParty *this)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
LAB_0859b491:
      local_10 = 0;
      while( true ) {
        if (3 < local_10) {
          LogManager::logFormat
                    (1,"party.cpp","bool CParty::change_manager_for_quick_party()",0x45d,
                     "there is no manager(party empty)");
          return 0;
        }
        cVar1 = _checkValidUser(this,local_10);
        if (cVar1 != '\0') break;
        local_10 = local_10 + 1;
      }
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + local_10 * 0x18 + 0x78);
      set_host(this);
      send_host_info(this);
      return 1;
    }
    if (*(int *)(this + local_14 * 0x18 + 0x78) == *(int *)(this + 0x74)) {
      CUser::SetPartyIndex(*(CUser **)(this + 0x74),-1);
      *(undefined4 *)(this + local_14 * 0x18 + 0x78) = 0;
      *(undefined4 *)(this + local_14 * 0x18 + 0x80) = 0;
      goto LAB_0859b491;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
