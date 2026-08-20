# Update

`_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj`

`TaoCrypt::HASH64withTransform::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASH64withTransform` | `0x08758f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758f90  _ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj
#           TaoCrypt::HASH64withTransform::Update(unsigned char const*, unsigned int)
# range [0x08758f90, 0x087590b9]
08758f90 +0x000:  push   %ebp
08758f91 +0x001:  mov    %esp,%ebp
08758f93 +0x003:  push   %edi
08758f94 +0x004:  push   %esi
08758f95 +0x005:  push   %ebx
08758f96 +0x006:  sub    $0x2c,%esp
08758f99 +0x009:  mov    0x8(%ebp),%edx
08758f9c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08758fa1 +0x011:  add    $0xc13bf7,%ebx
08758fa7 +0x017:  mov    0x10(%ebp),%esi
08758faa +0x01a:  mov    (%edx),%eax
08758fac +0x01c:  mov    %edx,(%esp)
08758faf +0x01f:  call   *0x14(%eax)
08758fb2 +0x022:  mov    0x8(%ebp),%edx
08758fb5 +0x025:  add    $0x50,%edx
08758fb8 +0x028:  test   %esi,%esi
08758fba +0x02a:  mov    %eax,-0x1c(%ebp)
08758fbd +0x02d:  je     087590b0 <+0x120>
08758fc3 +0x033:  mov    0x8(%ebp),%ecx
08758fc6 +0x036:  mov    %edx,%edi
08758fc8 +0x038:  mov    0x4(%ecx),%eax
08758fcb +0x03b:  mov    -0x1c(%ebp),%ecx
08758fce +0x03e:  shr    $0x3,%ecx
08758fd1 +0x041:  mov    %ecx,-0x20(%ebp)
08758fd4 +0x044:  jmp    08758fe0 <+0x50>
08758fd6 +0x046:  xchg   %ax,%ax
08758fd8 +0x048:  test   %esi,%esi
08758fda +0x04a:  je     087590b0 <+0x120>
08758fe0 +0x050:  mov    -0x1c(%ebp),%edx
08758fe3 +0x053:  mov    0xc(%ebp),%ecx
08758fe6 +0x056:  sub    %eax,%edx
08758fe8 +0x058:  cmp    %esi,%edx
08758fea +0x05a:  cmova  %esi,%edx
08758fed +0x05d:  lea    (%edi,%eax,1),%eax
08758ff0 +0x060:  mov    %edx,0x8(%esp)
08758ff4 +0x064:  mov    %ecx,0x4(%esp)
08758ff8 +0x068:  mov    %edx,-0x28(%ebp)
08758ffb +0x06b:  mov    %eax,(%esp)
08758ffe +0x06e:  call   0807d8a0 <_init+0x198>
08759003 +0x073:  mov    -0x28(%ebp),%edx
08759006 +0x076:  mov    0x8(%ebp),%ecx
08759009 +0x079:  add    %edx,0xc(%ebp)
0875900c +0x07c:  mov    %edx,%eax
0875900e +0x07e:  sub    %edx,%esi
08759010 +0x080:  add    0x4(%ecx),%eax
08759013 +0x083:  cmp    %eax,-0x1c(%ebp)
08759016 +0x086:  mov    %eax,0x4(%ecx)
08759019 +0x089:  jne    08758fd8 <+0x48>
0875901b +0x08b:  mov    (%ecx),%eax
0875901d +0x08d:  mov    %ecx,(%esp)
08759020 +0x090:  call   *0x1c(%eax)
08759023 +0x093:  test   %eax,%eax
08759025 +0x095:  je     0875907d <+0xed>
08759027 +0x097:  mov    -0x20(%ebp),%eax
0875902a +0x09a:  test   %eax,%eax
0875902c +0x09c:  je     0875907d <+0xed>
0875902e +0x09e:  xor    %eax,%eax
08759030 +0x0a0:  mov    %esi,-0x24(%ebp)
08759033 +0x0a3:  nop
08759034 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
08759038 +0x0a8:  mov    0x4(%edi,%eax,8),%edx
0875903c +0x0ac:  mov    (%edi,%eax,8),%esi
0875903f +0x0af:  mov    %edx,%ecx
08759041 +0x0b1:  ror    $0x18,%ecx
08759044 +0x0b4:  ror    $0x8,%edx
08759047 +0x0b7:  and    $0xff00ff,%ecx
0875904d +0x0bd:  and    $0xff00ff00,%edx
08759053 +0x0c3:  or     %edx,%ecx
08759055 +0x0c5:  mov    %esi,%edx
08759057 +0x0c7:  ror    $0x18,%edx
0875905a +0x0ca:  ror    $0x8,%esi
0875905d +0x0cd:  and    $0xff00ff,%edx
08759063 +0x0d3:  and    $0xff00ff00,%esi
08759069 +0x0d9:  or     %esi,%edx
0875906b +0x0db:  mov    %ecx,(%edi,%eax,8)
0875906e +0x0de:  mov    %edx,0x4(%edi,%eax,8)
08759072 +0x0e2:  add    $0x1,%eax
08759075 +0x0e5:  cmp    %eax,-0x20(%ebp)
08759078 +0x0e8:  ja     08759038 <+0xa8>
0875907a +0x0ea:  mov    -0x24(%ebp),%esi
0875907d +0x0ed:  mov    0x8(%ebp),%edx
08759080 +0x0f0:  mov    (%edx),%eax
08759082 +0x0f2:  mov    %edx,(%esp)
08759085 +0x0f5:  call   *0x24(%eax)
08759088 +0x0f8:  mov    0x8(%ebp),%eax
0875908b +0x0fb:  mov    -0x1c(%ebp),%ecx
0875908e +0x0fe:  mov    %eax,(%esp)
08759091 +0x101:  mov    %ecx,0x4(%esp)
08759095 +0x105:  call   08758c40 <_ZN8TaoCrypt19HASH64withTransform9AddLengthEj>  ; TaoCrypt::HASH64withTransform::AddLength(unsigned int)
0875909a +0x10a:  mov    0x8(%ebp),%edx
0875909d +0x10d:  xor    %eax,%eax
0875909f +0x10f:  test   %esi,%esi
087590a1 +0x111:  movl   $0x0,0x4(%edx)
087590a8 +0x118:  jne    08758fe0 <+0x50>
087590ae +0x11e:  xchg   %ax,%ax
087590b0 +0x120:  add    $0x2c,%esp
087590b3 +0x123:  pop    %ebx
087590b4 +0x124:  pop    %esi
087590b5 +0x125:  pop    %edi
087590b6 +0x126:  pop    %ebp
087590b7 +0x127:  ret
087590b8 +0x128:  nop
087590b9 +0x129:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::HASH64withTransform::Update @ 0x8758f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASH64withTransform::Update(unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::HASH64withTransform::Update(HASH64withTransform *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (**(code **)(*(int *)this + 0x14))(this);
  if (param_2 != 0) {
    uVar3 = *(uint *)(this + 4);
    do {
      while( true ) {
        uVar5 = uVar2 - uVar3;
        if (param_2 < uVar2 - uVar3) {
          uVar5 = param_2;
        }
        memcpy(this + uVar3 + 0x50,param_1,uVar5);
        param_1 = param_1 + uVar5;
        param_2 = param_2 - uVar5;
        uVar3 = uVar5 + *(int *)(this + 4);
        *(uint *)(this + 4) = uVar3;
        if (uVar2 != uVar3) break;
        iVar4 = (**(code **)(*(int *)this + 0x1c))(this);
        if ((iVar4 != 0) && (uVar2 >> 3 != 0)) {
          uVar3 = 0;
          do {
            uVar5 = *(uint *)(this + uVar3 * 8 + 0x54);
            uVar1 = *(uint *)(this + uVar3 * 8 + 0x50);
            *(uint *)(this + uVar3 * 8 + 0x50) =
                 uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
            *(uint *)(this + uVar3 * 8 + 0x54) =
                 uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2 >> 3);
        }
        (**(code **)(*(int *)this + 0x24))(this);
        AddLength(this,uVar2);
        uVar3 = 0;
        *(undefined4 *)(this + 4) = 0;
        if (param_2 == 0) {
          return;
        }
      }
    } while (param_2 != 0);
  }
  return;
}
```
