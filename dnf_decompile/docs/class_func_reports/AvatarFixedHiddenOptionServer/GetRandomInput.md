# GetRandomInput

`_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY`

`AvatarFixedHiddenOptionServer::GetRandomInput(ENUM_RARITY)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e334` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e334  _ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY
#           AvatarFixedHiddenOptionServer::GetRandomInput(ENUM_RARITY)
# range [0x0817e334, 0x0817e391]
0817e334 +0x00:  push   %ebp
0817e335 +0x01:  mov    %esp,%ebp
0817e337 +0x03:  sub    $0x18,%esp
0817e33a +0x06:  mov    0xc(%ebp),%eax
0817e33d +0x09:  cmp    $0x5,%eax
0817e340 +0x0c:  jle    0817e349 <+0x15>
0817e342 +0x0e:  mov    $0xffffffff,%eax
0817e347 +0x13:  jmp    0817e38f <+0x5b>
0817e349 +0x15:  mov    0xc(%ebp),%edx
0817e34c +0x18:  mov    %edx,%eax
0817e34e +0x1a:  add    %eax,%eax
0817e350 +0x1c:  add    %edx,%eax
0817e352 +0x1e:  shl    $0x2,%eax
0817e355 +0x21:  add    $0x50,%eax
0817e358 +0x24:  add    0x8(%ebp),%eax
0817e35b +0x27:  mov    %eax,(%esp)
0817e35e +0x2a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0817e363 +0x2f:  test   %eax,%eax
0817e365 +0x31:  sete   %al
0817e368 +0x34:  test   %al,%al
0817e36a +0x36:  je     0817e373 <+0x3f>
0817e36c +0x38:  mov    $0xffffffff,%eax
0817e371 +0x3d:  jmp    0817e38f <+0x5b>
0817e373 +0x3f:  mov    0xc(%ebp),%edx
0817e376 +0x42:  mov    %edx,%eax
0817e378 +0x44:  add    %eax,%eax
0817e37a +0x46:  add    %edx,%eax
0817e37c +0x48:  shl    $0x2,%eax
0817e37f +0x4b:  add    $0x50,%eax
0817e382 +0x4e:  add    0x8(%ebp),%eax
0817e385 +0x51:  mov    %eax,(%esp)
0817e388 +0x54:  call   0817ef6e <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x19f>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x19f
0817e38d +0x59:  mov    (%eax),%eax
0817e38f +0x5b:  leave
0817e390 +0x5c:  ret
0817e391 +0x5d:  nop
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::GetRandomInput @ 0x817e334

/* AvatarFixedHiddenOptionServer::GetRandomInput(ENUM_RARITY) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::GetRandomInput(AvatarFixedHiddenOptionServer *this,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 6) {
    iVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + param_2 * 0xc + 0x50));
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = (undefined4 *)std::vector<int,std::allocator<int>>::back();
      uVar1 = *puVar3;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
