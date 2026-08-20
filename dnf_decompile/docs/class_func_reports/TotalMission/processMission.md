# processMission

`_ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej`

`TotalMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x08166378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166378  _ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej
#           TotalMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x08166378, 0x081663f3]
08166378 +0x00:  push   %ebp
08166379 +0x01:  mov    %esp,%ebp
0816637b +0x03:  sub    $0x18,%esp
0816637e +0x06:  mov    0x8(%ebp),%eax
08166381 +0x09:  add    $0x28,%eax
08166384 +0x0c:  mov    %eax,(%esp)
08166387 +0x0f:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
0816638c +0x14:  mov    0x10(%ebp),%edx
0816638f +0x17:  movzwl 0x4(%edx),%edx
08166393 +0x1b:  movzwl %dx,%edx
08166396 +0x1e:  cmp    %edx,%eax
08166398 +0x20:  setbe  %al
0816639b +0x23:  test   %al,%al
0816639d +0x25:  jne    081663f1 <+0x79>
0816639f +0x27:  mov    0x8(%ebp),%eax
081663a2 +0x2a:  add    $0x28,%eax
081663a5 +0x2d:  mov    %eax,(%esp)
081663a8 +0x30:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
081663ad +0x35:  mov    0x10(%ebp),%edx
081663b0 +0x38:  movzwl 0x4(%edx),%edx
081663b4 +0x3c:  movzwl %dx,%edx
081663b7 +0x3f:  add    0x14(%ebp),%edx
081663ba +0x42:  cmp    %edx,%eax
081663bc +0x44:  setbe  %al
081663bf +0x47:  test   %al,%al
081663c1 +0x49:  je     081663dc <+0x64>
081663c3 +0x4b:  mov    0x8(%ebp),%eax
081663c6 +0x4e:  add    $0x28,%eax
081663c9 +0x51:  mov    %eax,(%esp)
081663cc +0x54:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
081663d1 +0x59:  mov    %eax,%edx
081663d3 +0x5b:  mov    0x10(%ebp),%eax
081663d6 +0x5e:  mov    %dx,0x4(%eax)
081663da +0x62:  jmp    081663f2 <+0x7a>
081663dc +0x64:  mov    0x10(%ebp),%eax
081663df +0x67:  movzwl 0x4(%eax),%edx
081663e3 +0x6b:  mov    0x14(%ebp),%eax
081663e6 +0x6e:  add    %eax,%edx
081663e8 +0x70:  mov    0x10(%ebp),%eax
081663eb +0x73:  mov    %dx,0x4(%eax)
081663ef +0x77:  jmp    081663f2 <+0x7a>
081663f1 +0x79:  nop
081663f2 +0x7a:  leave
081663f3 +0x7b:  ret
```

## 反编译 C

```c
// TotalMission::processMission @ 0x8166378

/* TotalMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
TotalMission::processMission
          (TotalMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                    ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
  if (*(ushort *)(param_2 + 4) < uVar2) {
    uVar2 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                      ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
    if (*(ushort *)(param_2 + 4) + param_3 < uVar2) {
      *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
    }
    else {
      uVar1 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                        ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
      *(undefined2 *)(param_2 + 4) = uVar1;
    }
  }
  return;
}
```
