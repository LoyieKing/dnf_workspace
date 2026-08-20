# change_manager

`_ZN6CParty14change_managerEv`

`CParty::change_manager()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859c832` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859c832  _ZN6CParty14change_managerEv
#           CParty::change_manager()
# range [0x0859c832, 0x0859c977]
0859c832 +0x000:  push   %ebp
0859c833 +0x001:  mov    %esp,%ebp
0859c835 +0x003:  sub    $0x38,%esp
0859c838 +0x006:  movl   $0x0,-0x10(%ebp)
0859c83f +0x00d:  jmp    0859c8cd <+0x9b>
0859c844 +0x012:  mov    -0x10(%ebp),%edx
0859c847 +0x015:  mov    0x8(%ebp),%ecx
0859c84a +0x018:  mov    %edx,%eax
0859c84c +0x01a:  add    %eax,%eax
0859c84e +0x01c:  add    %edx,%eax
0859c850 +0x01e:  shl    $0x3,%eax
0859c853 +0x021:  lea    (%ecx,%eax,1),%eax
0859c856 +0x024:  add    $0x78,%eax
0859c859 +0x027:  mov    (%eax),%edx
0859c85b +0x029:  mov    0x8(%ebp),%eax
0859c85e +0x02c:  mov    0x74(%eax),%eax
0859c861 +0x02f:  cmp    %eax,%edx
0859c863 +0x031:  jne    0859c8c9 <+0x97>
0859c865 +0x033:  mov    0x8(%ebp),%eax
0859c868 +0x036:  mov    0x74(%eax),%eax
0859c86b +0x039:  movl   $0xffffffff,0x4(%esp)
0859c873 +0x041:  mov    %eax,(%esp)
0859c876 +0x044:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859c87b +0x049:  mov    0x8(%ebp),%eax
0859c87e +0x04c:  mov    0x74(%eax),%eax
0859c881 +0x04f:  movl   $0x3,0x4(%esp)
0859c889 +0x057:  mov    %eax,(%esp)
0859c88c +0x05a:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0859c891 +0x05f:  mov    -0x10(%ebp),%edx
0859c894 +0x062:  mov    0x8(%ebp),%ecx
0859c897 +0x065:  mov    %edx,%eax
0859c899 +0x067:  add    %eax,%eax
0859c89b +0x069:  add    %edx,%eax
0859c89d +0x06b:  shl    $0x3,%eax
0859c8a0 +0x06e:  lea    (%ecx,%eax,1),%eax
0859c8a3 +0x071:  add    $0x78,%eax
0859c8a6 +0x074:  movl   $0x0,(%eax)
0859c8ac +0x07a:  mov    -0x10(%ebp),%edx
0859c8af +0x07d:  mov    0x8(%ebp),%ecx
0859c8b2 +0x080:  mov    %edx,%eax
0859c8b4 +0x082:  add    %eax,%eax
0859c8b6 +0x084:  add    %edx,%eax
0859c8b8 +0x086:  shl    $0x3,%eax
0859c8bb +0x089:  lea    (%ecx,%eax,1),%eax
0859c8be +0x08c:  sub    $0xffffff80,%eax
0859c8c1 +0x08f:  movl   $0x0,(%eax)
0859c8c7 +0x095:  jmp    0859c8dc <+0xaa>
0859c8c9 +0x097:  addl   $0x1,-0x10(%ebp)
0859c8cd +0x09b:  cmpl   $0x3,-0x10(%ebp)
0859c8d1 +0x09f:  setle  %al
0859c8d4 +0x0a2:  test   %al,%al
0859c8d6 +0x0a4:  jne    0859c844 <+0x12>
0859c8dc +0x0aa:  movl   $0x0,-0xc(%ebp)
0859c8e3 +0x0b1:  jmp    0859c939 <+0x107>
0859c8e5 +0x0b3:  mov    -0xc(%ebp),%eax
0859c8e8 +0x0b6:  mov    %eax,0x4(%esp)
0859c8ec +0x0ba:  mov    0x8(%ebp),%eax
0859c8ef +0x0bd:  mov    %eax,(%esp)
0859c8f2 +0x0c0:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859c8f7 +0x0c5:  test   %al,%al
0859c8f9 +0x0c7:  je     0859c935 <+0x103>
0859c8fb +0x0c9:  mov    -0xc(%ebp),%edx
0859c8fe +0x0cc:  mov    0x8(%ebp),%ecx
0859c901 +0x0cf:  mov    %edx,%eax
0859c903 +0x0d1:  add    %eax,%eax
0859c905 +0x0d3:  add    %edx,%eax
0859c907 +0x0d5:  shl    $0x3,%eax
0859c90a +0x0d8:  lea    (%ecx,%eax,1),%eax
0859c90d +0x0db:  add    $0x78,%eax
0859c910 +0x0de:  mov    (%eax),%edx
0859c912 +0x0e0:  mov    0x8(%ebp),%eax
0859c915 +0x0e3:  mov    %edx,0x74(%eax)
0859c918 +0x0e6:  mov    0x8(%ebp),%eax
0859c91b +0x0e9:  mov    %eax,(%esp)
0859c91e +0x0ec:  call   0859cdbc <_ZN6CParty8set_hostEv>  ; CParty::set_host()
0859c923 +0x0f1:  mov    0x8(%ebp),%eax
0859c926 +0x0f4:  mov    %eax,(%esp)
0859c929 +0x0f7:  call   0859cdd2 <_ZN6CParty14send_host_infoEv>  ; CParty::send_host_info()
0859c92e +0x0fc:  mov    $0x1,%eax
0859c933 +0x101:  jmp    0859c975 <+0x143>
0859c935 +0x103:  addl   $0x1,-0xc(%ebp)
0859c939 +0x107:  cmpl   $0x3,-0xc(%ebp)
0859c93d +0x10b:  setle  %al
0859c940 +0x10e:  test   %al,%al
0859c942 +0x110:  jne    0859c8e5 <+0xb3>
0859c944 +0x112:  movl   $"there is no manager(party empty)",0x10(%esp)
0859c94c +0x11a:  movl   $0x689,0xc(%esp)
0859c954 +0x122:  movl   $&_ZZN6CParty14change_managerEvE19__PRETTY_FUNCTION__,0x8(%esp)
0859c95c +0x12a:  movl   $"party.cpp",0x4(%esp)
0859c964 +0x132:  movl   $0x1,(%esp)
0859c96b +0x139:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859c970 +0x13e:  mov    $0x0,%eax
0859c975 +0x143:  leave
0859c976 +0x144:  ret
0859c977 +0x145:  nop
```

## 反编译 C

```c
// CParty::change_manager @ 0x859c832

/* CParty::change_manager() */

undefined4 __thiscall CParty::change_manager(CParty *this)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
LAB_0859c8dc:
      local_10 = 0;
      while( true ) {
        if (3 < local_10) {
          LogManager::logFormat
                    (1,"party.cpp","bool CParty::change_manager()",0x689,
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
      CUser::set_state(*(CUser **)(this + 0x74),3);
      *(undefined4 *)(this + local_14 * 0x18 + 0x78) = 0;
      *(undefined4 *)(this + local_14 * 0x18 + 0x80) = 0;
      goto LAB_0859c8dc;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
