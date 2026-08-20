# IsClearedQuest

`_ZN6CParty14IsClearedQuestEi`

`CParty::IsClearedQuest(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a82d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a82d2  _ZN6CParty14IsClearedQuestEi
#           CParty::IsClearedQuest(int)
# range [0x085a82d2, 0x085a8349]
085a82d2 +0x00:  push   %ebp
085a82d3 +0x01:  mov    %esp,%ebp
085a82d5 +0x03:  sub    $0x28,%esp
085a82d8 +0x06:  movl   $0x0,-0xc(%ebp)
085a82df +0x0d:  jmp    085a8337 <+0x65>
085a82e1 +0x0f:  mov    -0xc(%ebp),%eax
085a82e4 +0x12:  mov    %eax,0x4(%esp)
085a82e8 +0x16:  mov    0x8(%ebp),%eax
085a82eb +0x19:  mov    %eax,(%esp)
085a82ee +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a82f3 +0x21:  test   %al,%al
085a82f5 +0x23:  je     085a8333 <+0x61>
085a82f7 +0x25:  mov    -0xc(%ebp),%edx
085a82fa +0x28:  mov    0x8(%ebp),%ecx
085a82fd +0x2b:  mov    %edx,%eax
085a82ff +0x2d:  add    %eax,%eax
085a8301 +0x2f:  add    %edx,%eax
085a8303 +0x31:  shl    $0x3,%eax
085a8306 +0x34:  lea    (%ecx,%eax,1),%eax
085a8309 +0x37:  add    $0x78,%eax
085a830c +0x3a:  mov    (%eax),%eax
085a830e +0x3c:  mov    %eax,(%esp)
085a8311 +0x3f:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085a8316 +0x44:  mov    0xc(%ebp),%edx
085a8319 +0x47:  mov    %edx,0x4(%esp)
085a831d +0x4b:  mov    %eax,(%esp)
085a8320 +0x4e:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
085a8325 +0x53:  xor    $0x1,%eax
085a8328 +0x56:  test   %al,%al
085a832a +0x58:  je     085a8333 <+0x61>
085a832c +0x5a:  mov    $0x0,%eax
085a8331 +0x5f:  jmp    085a8347 <+0x75>
085a8333 +0x61:  addl   $0x1,-0xc(%ebp)
085a8337 +0x65:  cmpl   $0x3,-0xc(%ebp)
085a833b +0x69:  setle  %al
085a833e +0x6c:  test   %al,%al
085a8340 +0x6e:  jne    085a82e1 <+0xf>
085a8342 +0x70:  mov    $0x1,%eax
085a8347 +0x75:  leave
085a8348 +0x76:  ret
085a8349 +0x77:  nop
```

## 反编译 C

```c
// CParty::IsClearedQuest @ 0x85a82d2

/* CParty::IsClearedQuest(int) */

undefined4 __thiscall CParty::IsClearedQuest(CParty *this,int param_1)

{
  char cVar1;
  UserQuest *this_00;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)(this + local_10 * 0x18 + 0x78));
      cVar1 = UserQuest::isClearQuest(this_00,param_1);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
