# Update

`_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj`

`TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASHwithTransform` | `0x08758c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758c70  _ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj
#           TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int)
# range [0x08758c70, 0x08758d89]
08758c70 +0x000:  push   %ebp
08758c71 +0x001:  mov    %esp,%ebp
08758c73 +0x003:  push   %edi
08758c74 +0x004:  push   %esi
08758c75 +0x005:  push   %ebx
08758c76 +0x006:  sub    $0x3c,%esp
08758c79 +0x009:  mov    0x8(%ebp),%edx
08758c7c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08758c81 +0x011:  add    $0xc13f17,%ebx
08758c87 +0x017:  mov    0x10(%ebp),%esi
08758c8a +0x01a:  mov    (%edx),%eax
08758c8c +0x01c:  mov    %edx,-0x30(%ebp)
08758c8f +0x01f:  mov    %edx,(%esp)
08758c92 +0x022:  call   *0x14(%eax)
08758c95 +0x025:  mov    -0x30(%ebp),%edx
08758c98 +0x028:  test   %esi,%esi
08758c9a +0x02a:  lea    0x30(%edx),%ecx
08758c9d +0x02d:  mov    %eax,-0x1c(%ebp)
08758ca0 +0x030:  je     08758d80 <+0x110>
08758ca6 +0x036:  mov    %eax,%edi
08758ca8 +0x038:  mov    0x4(%edx),%eax
08758cab +0x03b:  shr    $0x2,%edi
08758cae +0x03e:  mov    %edi,-0x24(%ebp)
08758cb1 +0x041:  mov    %ecx,-0x20(%ebp)
08758cb4 +0x044:  jmp    08758cc0 <+0x50>
08758cb6 +0x046:  xchg   %ax,%ax
08758cb8 +0x048:  test   %esi,%esi
08758cba +0x04a:  je     08758d80 <+0x110>
08758cc0 +0x050:  mov    -0x1c(%ebp),%edi
08758cc3 +0x053:  mov    0xc(%ebp),%ecx
08758cc6 +0x056:  mov    %edx,-0x30(%ebp)
08758cc9 +0x059:  sub    %eax,%edi
08758ccb +0x05b:  cmp    %esi,%edi
08758ccd +0x05d:  cmova  %esi,%edi
08758cd0 +0x060:  add    -0x20(%ebp),%eax
08758cd3 +0x063:  sub    %edi,%esi
08758cd5 +0x065:  mov    %edi,0x8(%esp)
08758cd9 +0x069:  mov    %ecx,0x4(%esp)
08758cdd +0x06d:  mov    %eax,(%esp)
08758ce0 +0x070:  call   0807d8a0 <_init+0x198>
08758ce5 +0x075:  mov    -0x30(%ebp),%edx
08758ce8 +0x078:  add    %edi,0xc(%ebp)
08758ceb +0x07b:  mov    0x4(%edx),%eax
08758cee +0x07e:  add    %edi,%eax
08758cf0 +0x080:  cmp    %eax,-0x1c(%ebp)
08758cf3 +0x083:  mov    %eax,0x4(%edx)
08758cf6 +0x086:  jne    08758cb8 <+0x48>
08758cf8 +0x088:  mov    (%edx),%eax
08758cfa +0x08a:  mov    %edx,(%esp)
08758cfd +0x08d:  call   *0x1c(%eax)
08758d00 +0x090:  mov    -0x30(%ebp),%edx
08758d03 +0x093:  test   %eax,%eax
08758d05 +0x095:  je     08758d48 <+0xd8>
08758d07 +0x097:  mov    -0x24(%ebp),%eax
08758d0a +0x09a:  test   %eax,%eax
08758d0c +0x09c:  je     08758d48 <+0xd8>
08758d0e +0x09e:  mov    %esi,-0x2c(%ebp)
08758d11 +0x0a1:  mov    -0x20(%ebp),%ecx
08758d14 +0x0a4:  xor    %edi,%edi
08758d16 +0x0a6:  mov    -0x24(%ebp),%esi
08758d19 +0x0a9:  mov    %edx,-0x28(%ebp)
08758d1c +0x0ac:  lea    0x0(%esi,%eiz,1),%esi
08758d20 +0x0b0:  mov    (%ecx,%edi,4),%edx
08758d23 +0x0b3:  mov    %edx,%eax
08758d25 +0x0b5:  ror    $0x18,%eax
08758d28 +0x0b8:  ror    $0x8,%edx
08758d2b +0x0bb:  and    $0xff00ff,%eax
08758d30 +0x0c0:  and    $0xff00ff00,%edx
08758d36 +0x0c6:  or     %edx,%eax
08758d38 +0x0c8:  mov    %eax,(%ecx,%edi,4)
08758d3b +0x0cb:  add    $0x1,%edi
08758d3e +0x0ce:  cmp    %edi,%esi
08758d40 +0x0d0:  ja     08758d20 <+0xb0>
08758d42 +0x0d2:  mov    -0x28(%ebp),%edx
08758d45 +0x0d5:  mov    -0x2c(%ebp),%esi
08758d48 +0x0d8:  mov    (%edx),%eax
08758d4a +0x0da:  mov    %edx,-0x30(%ebp)
08758d4d +0x0dd:  mov    %edx,(%esp)
08758d50 +0x0e0:  call   *0x24(%eax)
08758d53 +0x0e3:  mov    -0x30(%ebp),%edx
08758d56 +0x0e6:  mov    -0x1c(%ebp),%edi
08758d59 +0x0e9:  mov    %edx,(%esp)
08758d5c +0x0ec:  mov    %edi,0x4(%esp)
08758d60 +0x0f0:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
08758d65 +0x0f5:  mov    -0x30(%ebp),%edx
08758d68 +0x0f8:  xor    %eax,%eax
08758d6a +0x0fa:  test   %esi,%esi
08758d6c +0x0fc:  movl   $0x0,0x4(%edx)
08758d73 +0x103:  jne    08758cc0 <+0x50>
08758d79 +0x109:  lea    0x0(%esi,%eiz,1),%esi
08758d80 +0x110:  add    $0x3c,%esp
08758d83 +0x113:  pop    %ebx
08758d84 +0x114:  pop    %esi
08758d85 +0x115:  pop    %edi
08758d86 +0x116:  pop    %ebp
08758d87 +0x117:  ret
08758d88 +0x118:  nop
08758d89 +0x119:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::HASHwithTransform::Update @ 0x8758c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::HASHwithTransform::Update(HASHwithTransform *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(*(int *)this + 0x14))(this);
  if (param_2 != 0) {
    uVar2 = *(uint *)(this + 4);
    do {
      while( true ) {
        uVar4 = uVar1 - uVar2;
        if (param_2 < uVar1 - uVar2) {
          uVar4 = param_2;
        }
        param_2 = param_2 - uVar4;
        memcpy(this + uVar2 + 0x30,param_1,uVar4);
        param_1 = param_1 + uVar4;
        uVar2 = *(int *)(this + 4) + uVar4;
        *(uint *)(this + 4) = uVar2;
        if (uVar1 != uVar2) break;
        iVar3 = (**(code **)(*(int *)this + 0x1c))(this);
        if ((iVar3 != 0) && (uVar1 >> 2 != 0)) {
          uVar2 = 0;
          do {
            uVar4 = *(uint *)(this + uVar2 * 4 + 0x30);
            *(uint *)(this + uVar2 * 4 + 0x30) =
                 uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1 >> 2);
        }
        (**(code **)(*(int *)this + 0x24))(this);
        AddLength(this,uVar1);
        uVar2 = 0;
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
