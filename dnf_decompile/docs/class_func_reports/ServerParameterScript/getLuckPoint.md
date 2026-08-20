# getLuckPoint

`_ZN21ServerParameterScript12getLuckPointEiRi`

`ServerParameterScript::getLuckPoint(int, int&)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c486  _ZN21ServerParameterScript12getLuckPointEiRi
#           ServerParameterScript::getLuckPoint(int, int&)
# range [0x08a8c486, 0x08a8c4fd]
08a8c486 +0x00:  push   %ebp
08a8c487 +0x01:  mov    %esp,%ebp
08a8c489 +0x03:  sub    $0x28,%esp
08a8c48c +0x06:  movl   $0x0,-0xc(%ebp)
08a8c493 +0x0d:  jmp    08a8c4de <+0x58>
08a8c495 +0x0f:  mov    0x8(%ebp),%eax
08a8c498 +0x12:  lea    0x48(%eax),%edx
08a8c49b +0x15:  mov    -0xc(%ebp),%eax
08a8c49e +0x18:  mov    %eax,0x4(%esp)
08a8c4a2 +0x1c:  mov    %edx,(%esp)
08a8c4a5 +0x1f:  call   08a8da9c <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf13>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf13
08a8c4aa +0x24:  mov    (%eax),%eax
08a8c4ac +0x26:  cmp    0xc(%ebp),%eax
08a8c4af +0x29:  setge  %al
08a8c4b2 +0x2c:  test   %al,%al
08a8c4b4 +0x2e:  je     08a8c4da <+0x54>
08a8c4b6 +0x30:  mov    0x8(%ebp),%eax
08a8c4b9 +0x33:  lea    0x48(%eax),%edx
08a8c4bc +0x36:  mov    -0xc(%ebp),%eax
08a8c4bf +0x39:  mov    %eax,0x4(%esp)
08a8c4c3 +0x3d:  mov    %edx,(%esp)
08a8c4c6 +0x40:  call   08a8da9c <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf13>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf13
08a8c4cb +0x45:  mov    0x4(%eax),%edx
08a8c4ce +0x48:  mov    0x10(%ebp),%eax
08a8c4d1 +0x4b:  mov    %edx,(%eax)
08a8c4d3 +0x4d:  mov    $0x1,%eax
08a8c4d8 +0x52:  jmp    08a8c4fb <+0x75>
08a8c4da +0x54:  addl   $0x1,-0xc(%ebp)
08a8c4de +0x58:  mov    0x8(%ebp),%eax
08a8c4e1 +0x5b:  add    $0x48,%eax
08a8c4e4 +0x5e:  mov    %eax,(%esp)
08a8c4e7 +0x61:  call   08a8da80 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xef7>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xef7
08a8c4ec +0x66:  cmp    -0xc(%ebp),%eax
08a8c4ef +0x69:  seta   %al
08a8c4f2 +0x6c:  test   %al,%al
08a8c4f4 +0x6e:  jne    08a8c495 <+0xf>
08a8c4f6 +0x70:  mov    $0x0,%eax
08a8c4fb +0x75:  leave
08a8c4fc +0x76:  ret
08a8c4fd +0x77:  nop
```

## 反编译 C

```c
// ServerParameterScript::getLuckPoint @ 0x8a8c486

/* ServerParameterScript::getLuckPoint(int, int&) */

undefined4 __thiscall
ServerParameterScript::getLuckPoint(ServerParameterScript *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::size
                      ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48));
    if (uVar3 <= local_10) {
      return 0;
    }
    piVar1 = (int *)std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::operator[]
                              ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48),
                               local_10);
    if (param_1 <= *piVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::operator[]
                    ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48),local_10);
  *param_2 = *(int *)(iVar2 + 4);
  return 1;
}
```
