# change_manager

`_ZN6CParty14change_managerEP5CUseri`

`CParty::change_manager(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859c978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859c978  _ZN6CParty14change_managerEP5CUseri
#           CParty::change_manager(CUser*, int)
# range [0x0859c978, 0x0859ca49]
0859c978 +0x00:  push   %ebp
0859c979 +0x01:  mov    %esp,%ebp
0859c97b +0x03:  sub    $0x18,%esp
0859c97e +0x06:  cmpl   $0x0,0x10(%ebp)
0859c982 +0x0a:  js     0859c98a <+0x12>
0859c984 +0x0c:  cmpl   $0x3,0x10(%ebp)
0859c988 +0x10:  jle    0859c994 <+0x1c>
0859c98a +0x12:  mov    $0x15,%eax
0859c98f +0x17:  jmp    0859ca47 <+0xcf>
0859c994 +0x1c:  mov    0x10(%ebp),%edx
0859c997 +0x1f:  mov    0x8(%ebp),%ecx
0859c99a +0x22:  mov    %edx,%eax
0859c99c +0x24:  add    %eax,%eax
0859c99e +0x26:  add    %edx,%eax
0859c9a0 +0x28:  shl    $0x3,%eax
0859c9a3 +0x2b:  lea    (%ecx,%eax,1),%eax
0859c9a6 +0x2e:  add    $0x78,%eax
0859c9a9 +0x31:  mov    (%eax),%eax
0859c9ab +0x33:  test   %eax,%eax
0859c9ad +0x35:  jne    0859c9b9 <+0x41>
0859c9af +0x37:  mov    $0x15,%eax
0859c9b4 +0x3c:  jmp    0859ca47 <+0xcf>
0859c9b9 +0x41:  mov    0x8(%ebp),%eax
0859c9bc +0x44:  mov    0x74(%eax),%eax
0859c9bf +0x47:  cmp    0xc(%ebp),%eax
0859c9c2 +0x4a:  je     0859c9cb <+0x53>
0859c9c4 +0x4c:  mov    $0x8,%eax
0859c9c9 +0x51:  jmp    0859ca47 <+0xcf>
0859c9cb +0x53:  mov    0x10(%ebp),%edx
0859c9ce +0x56:  mov    0x8(%ebp),%ecx
0859c9d1 +0x59:  mov    %edx,%eax
0859c9d3 +0x5b:  add    %eax,%eax
0859c9d5 +0x5d:  add    %edx,%eax
0859c9d7 +0x5f:  shl    $0x3,%eax
0859c9da +0x62:  lea    (%ecx,%eax,1),%eax
0859c9dd +0x65:  add    $0x78,%eax
0859c9e0 +0x68:  mov    (%eax),%edx
0859c9e2 +0x6a:  mov    0x8(%ebp),%eax
0859c9e5 +0x6d:  mov    0x74(%eax),%eax
0859c9e8 +0x70:  cmp    %eax,%edx
0859c9ea +0x72:  jne    0859c9f3 <+0x7b>
0859c9ec +0x74:  mov    $0x12,%eax
0859c9f1 +0x79:  jmp    0859ca47 <+0xcf>
0859c9f3 +0x7b:  mov    0x10(%ebp),%edx
0859c9f6 +0x7e:  mov    0x8(%ebp),%ecx
0859c9f9 +0x81:  mov    %edx,%eax
0859c9fb +0x83:  add    %eax,%eax
0859c9fd +0x85:  add    %edx,%eax
0859c9ff +0x87:  shl    $0x3,%eax
0859ca02 +0x8a:  lea    (%ecx,%eax,1),%eax
0859ca05 +0x8d:  add    $0x78,%eax
0859ca08 +0x90:  mov    (%eax),%edx
0859ca0a +0x92:  mov    0x8(%ebp),%eax
0859ca0d +0x95:  mov    %edx,0x74(%eax)
0859ca10 +0x98:  mov    0x8(%ebp),%eax
0859ca13 +0x9b:  mov    %eax,(%esp)
0859ca16 +0x9e:  call   0859cdbc <_ZN6CParty8set_hostEv>  ; CParty::set_host()
0859ca1b +0xa3:  mov    0x8(%ebp),%eax
0859ca1e +0xa6:  mov    %eax,(%esp)
0859ca21 +0xa9:  call   0859cdd2 <_ZN6CParty14send_host_infoEv>  ; CParty::send_host_info()
0859ca26 +0xae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859ca2b +0xb3:  movl   $0x2,0x8(%esp)
0859ca33 +0xbb:  mov    0x8(%ebp),%edx
0859ca36 +0xbe:  mov    %edx,0x4(%esp)
0859ca3a +0xc2:  mov    %eax,(%esp)
0859ca3d +0xc5:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0859ca42 +0xca:  mov    $0x0,%eax
0859ca47 +0xcf:  leave
0859ca48 +0xd0:  ret
0859ca49 +0xd1:  nop
```

## 反编译 C

```c
// CParty::change_manager @ 0x859c978

/* CParty::change_manager(CUser*, int) */

undefined4 __thiscall CParty::change_manager(CParty *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  GameWorld *this_00;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0x15;
  }
  else if (*(int *)(this + param_2 * 0x18 + 0x78) == 0) {
    uVar1 = 0x15;
  }
  else if (*(CUser **)(this + 0x74) == param_1) {
    if (*(int *)(this + param_2 * 0x18 + 0x78) == *(int *)(this + 0x74)) {
      uVar1 = 0x12;
    }
    else {
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + param_2 * 0x18 + 0x78);
      set_host(this);
      send_host_info(this);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_party_info_to_all(this_00,this,2);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}
```
