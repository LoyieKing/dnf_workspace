# CheckMemberArea

`_ZN6CParty15CheckMemberAreaEv`

`CParty::CheckMemberArea()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d656  _ZN6CParty15CheckMemberAreaEv
#           CParty::CheckMemberArea()
# range [0x0859d656, 0x0859d70d]
0859d656 +0x00:  push   %ebp
0859d657 +0x01:  mov    %esp,%ebp
0859d659 +0x03:  sub    $0x28,%esp
0859d65c +0x06:  movl   $0xffffffff,-0x10(%ebp)
0859d663 +0x0d:  movl   $0x0,-0xc(%ebp)
0859d66a +0x14:  jmp    0859d6f7 <+0xa1>
0859d66f +0x19:  mov    -0xc(%ebp),%eax
0859d672 +0x1c:  mov    %eax,0x4(%esp)
0859d676 +0x20:  mov    0x8(%ebp),%eax
0859d679 +0x23:  mov    %eax,(%esp)
0859d67c +0x26:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d681 +0x2b:  xor    $0x1,%eax
0859d684 +0x2e:  test   %al,%al
0859d686 +0x30:  jne    0859d6f2 <+0x9c>
0859d688 +0x32:  cmpl   $0xffffffff,-0x10(%ebp)
0859d68c +0x36:  jne    0859d6ba <+0x64>
0859d68e +0x38:  mov    -0xc(%ebp),%edx
0859d691 +0x3b:  mov    0x8(%ebp),%ecx
0859d694 +0x3e:  mov    %edx,%eax
0859d696 +0x40:  add    %eax,%eax
0859d698 +0x42:  add    %edx,%eax
0859d69a +0x44:  shl    $0x3,%eax
0859d69d +0x47:  lea    (%ecx,%eax,1),%eax
0859d6a0 +0x4a:  add    $0x78,%eax
0859d6a3 +0x4d:  mov    (%eax),%eax
0859d6a5 +0x4f:  movl   $0x0,0x4(%esp)
0859d6ad +0x57:  mov    %eax,(%esp)
0859d6b0 +0x5a:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0859d6b5 +0x5f:  mov    %eax,-0x10(%ebp)
0859d6b8 +0x62:  jmp    0859d6f3 <+0x9d>
0859d6ba +0x64:  mov    -0xc(%ebp),%edx
0859d6bd +0x67:  mov    0x8(%ebp),%ecx
0859d6c0 +0x6a:  mov    %edx,%eax
0859d6c2 +0x6c:  add    %eax,%eax
0859d6c4 +0x6e:  add    %edx,%eax
0859d6c6 +0x70:  shl    $0x3,%eax
0859d6c9 +0x73:  lea    (%ecx,%eax,1),%eax
0859d6cc +0x76:  add    $0x78,%eax
0859d6cf +0x79:  mov    (%eax),%eax
0859d6d1 +0x7b:  movl   $0x0,0x4(%esp)
0859d6d9 +0x83:  mov    %eax,(%esp)
0859d6dc +0x86:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0859d6e1 +0x8b:  cmp    -0x10(%ebp),%eax
0859d6e4 +0x8e:  setne  %al
0859d6e7 +0x91:  test   %al,%al
0859d6e9 +0x93:  je     0859d6f3 <+0x9d>
0859d6eb +0x95:  mov    $0x0,%eax
0859d6f0 +0x9a:  jmp    0859d70b <+0xb5>
0859d6f2 +0x9c:  nop
0859d6f3 +0x9d:  addl   $0x1,-0xc(%ebp)
0859d6f7 +0xa1:  cmpl   $0x3,-0xc(%ebp)
0859d6fb +0xa5:  setle  %al
0859d6fe +0xa8:  test   %al,%al
0859d700 +0xaa:  jne    0859d66f <+0x19>
0859d706 +0xb0:  mov    $0x1,%eax
0859d70b +0xb5:  leave
0859d70c +0xb6:  ret
0859d70d +0xb7:  nop
```

## 反编译 C

```c
// CParty::CheckMemberArea @ 0x859d656

/* CParty::CheckMemberArea() */

undefined4 __thiscall CParty::CheckMemberArea(CParty *this)

{
  char cVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = -1;
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      if (local_14 == -1) {
        local_14 = CUser::get_area(*(CUser **)(this + local_10 * 0x18 + 0x78),false);
      }
      else {
        iVar2 = CUser::get_area(*(CUser **)(this + local_10 * 0x18 + 0x78),false);
        if (iVar2 != local_14) {
          return 0;
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
