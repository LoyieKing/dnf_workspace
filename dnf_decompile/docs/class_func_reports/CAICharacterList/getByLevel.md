# getByLevel

`_ZN16CAICharacterList10getByLevelEj`

`CAICharacterList::getByLevel(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834aa60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834aa60  _ZN16CAICharacterList10getByLevelEj
#           CAICharacterList::getByLevel(unsigned int)
# range [0x0834aa60, 0x0834aaf3]
0834aa60 +0x00:  push   %ebp
0834aa61 +0x01:  mov    %esp,%ebp
0834aa63 +0x03:  sub    $0x28,%esp
0834aa66 +0x06:  movl   $0xa,(%esp)
0834aa6d +0x0d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834aa72 +0x12:  add    0xc(%ebp),%eax
0834aa75 +0x15:  sub    $0x5,%eax
0834aa78 +0x18:  mov    %eax,-0x10(%ebp)
0834aa7b +0x1b:  cmpl   $0x0,-0x10(%ebp)
0834aa7f +0x1f:  je     0834aa87 <+0x27>
0834aa81 +0x21:  cmpl   $0x62,-0x10(%ebp)
0834aa85 +0x25:  jbe    0834aa8e <+0x2e>
0834aa87 +0x27:  mov    $0x0,%eax
0834aa8c +0x2c:  jmp    0834aaf2 <+0x92>
0834aa8e +0x2e:  mov    -0x10(%ebp),%edx
0834aa91 +0x31:  mov    %edx,%eax
0834aa93 +0x33:  add    %eax,%eax
0834aa95 +0x35:  add    %edx,%eax
0834aa97 +0x37:  shl    $0x2,%eax
0834aa9a +0x3a:  add    $0x10,%eax
0834aa9d +0x3d:  add    0x8(%ebp),%eax
0834aaa0 +0x40:  add    $0x8,%eax
0834aaa3 +0x43:  mov    %eax,(%esp)
0834aaa6 +0x46:  call   08388ba6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18646>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18646
0834aaab +0x4b:  test   %al,%al
0834aaad +0x4d:  je     0834aab6 <+0x56>
0834aaaf +0x4f:  mov    $0x0,%eax
0834aab4 +0x54:  jmp    0834aaf2 <+0x92>
0834aab6 +0x56:  mov    0x8(%ebp),%eax
0834aab9 +0x59:  lea    0x18(%eax),%ecx
0834aabc +0x5c:  mov    -0x10(%ebp),%edx
0834aabf +0x5f:  mov    %edx,%eax
0834aac1 +0x61:  add    %eax,%eax
0834aac3 +0x63:  add    %edx,%eax
0834aac5 +0x65:  shl    $0x2,%eax
0834aac8 +0x68:  lea    (%ecx,%eax,1),%eax
0834aacb +0x6b:  mov    %eax,-0xc(%ebp)
0834aace +0x6e:  mov    -0xc(%ebp),%eax
0834aad1 +0x71:  mov    %eax,(%esp)
0834aad4 +0x74:  call   08388bea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1868a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1868a
0834aad9 +0x79:  mov    %eax,(%esp)
0834aadc +0x7c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834aae1 +0x81:  mov    %eax,0x4(%esp)
0834aae5 +0x85:  mov    -0xc(%ebp),%eax
0834aae8 +0x88:  mov    %eax,(%esp)
0834aaeb +0x8b:  call   08388c06 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x186a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x186a6
0834aaf0 +0x90:  mov    (%eax),%eax
0834aaf2 +0x92:  leave
0834aaf3 +0x93:  ret
```

## 反编译 C

```c
// CAICharacterList::getByLevel @ 0x834aa60

/* CAICharacterList::getByLevel(unsigned int) */

undefined4 __thiscall CAICharacterList::getByLevel(CAICharacterList *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar2 = get_rand_int(10);
  uVar3 = (iVar2 + param_1) - 5;
  if ((uVar3 == 0) || (0x62 < uVar3)) {
    uVar4 = 0;
  }
  else {
    cVar1 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::empty();
    if (cVar1 == '\0') {
      iVar2 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                        ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                         (this + uVar3 * 0xc + 0x18));
      uVar5 = get_rand_int(iVar2);
      puVar6 = (undefined4 *)
               std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
                         ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                          (this + uVar3 * 0xc + 0x18),uVar5);
      uVar4 = *puVar6;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
