# Update

`_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj`

`TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087ab3e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087ab3e0  _ZN8TaoCrypt9RIPEMD1606UpdateEPKhj
#           TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
# range [0x087ab3e0, 0x087ab52a]
087ab3e0 +0x000:  push   %ebp
087ab3e1 +0x001:  mov    %esp,%ebp
087ab3e3 +0x003:  sub    $0x38,%esp
087ab3e6 +0x006:  mov    %ebx,-0xc(%ebp)
087ab3e9 +0x009:  mov    0xc(%ebp),%edx
087ab3ec +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087ab3f1 +0x011:  add    $0xbc17a7,%ebx
087ab3f7 +0x017:  mov    %esi,-0x8(%ebp)
087ab3fa +0x01a:  mov    0x8(%ebp),%esi
087ab3fd +0x01d:  mov    %edi,-0x4(%ebp)
087ab400 +0x020:  mov    0x10(%ebp),%edi
087ab403 +0x023:  mov    -0x5c8(%ebx),%eax
087ab409 +0x029:  cmpb   $0x0,(%eax)
087ab40c +0x02c:  je     087ab4a0 <+0xc0>
087ab412 +0x032:  lea    0x30(%esi),%eax
087ab415 +0x035:  mov    %eax,-0x1c(%ebp)
087ab418 +0x038:  mov    0x4(%esi),%eax
087ab41b +0x03b:  test   %eax,%eax
087ab41d +0x03d:  jne    087ab458 <+0x78>
087ab41f +0x03f:  mov    %edi,%eax
087ab421 +0x041:  shr    $0x6,%eax
087ab424 +0x044:  test   %eax,%eax
087ab426 +0x046:  jne    087ab4c0 <+0xe0>
087ab42c +0x04c:  test   %edi,%edi
087ab42e +0x04e:  je     087ab449 <+0x69>
087ab430 +0x050:  mov    -0x1c(%ebp),%eax
087ab433 +0x053:  add    0x4(%esi),%eax
087ab436 +0x056:  mov    %edi,0x8(%esp)
087ab43a +0x05a:  mov    %edx,0x4(%esp)
087ab43e +0x05e:  mov    %eax,(%esp)
087ab441 +0x061:  call   0807d8a0 <_init+0x198>
087ab446 +0x066:  add    %edi,0x4(%esi)
087ab449 +0x069:  mov    -0xc(%ebp),%ebx
087ab44c +0x06c:  mov    -0x8(%ebp),%esi
087ab44f +0x06f:  mov    -0x4(%ebp),%edi
087ab452 +0x072:  mov    %ebp,%esp
087ab454 +0x074:  pop    %ebp
087ab455 +0x075:  ret
087ab456 +0x076:  xchg   %ax,%ax
087ab458 +0x078:  mov    $0x40,%ecx
087ab45d +0x07d:  sub    %eax,%ecx
087ab45f +0x07f:  cmp    %ecx,%edi
087ab461 +0x081:  cmovbe %edi,%ecx
087ab464 +0x084:  add    -0x1c(%ebp),%eax
087ab467 +0x087:  mov    %ecx,0x8(%esp)
087ab46b +0x08b:  mov    %edx,0x4(%esp)
087ab46f +0x08f:  mov    %edx,-0x20(%ebp)
087ab472 +0x092:  mov    %ecx,-0x24(%ebp)
087ab475 +0x095:  mov    %eax,(%esp)
087ab478 +0x098:  call   0807d8a0 <_init+0x198>
087ab47d +0x09d:  mov    -0x24(%ebp),%ecx
087ab480 +0x0a0:  mov    0x4(%esi),%eax
087ab483 +0x0a3:  mov    -0x20(%ebp),%edx
087ab486 +0x0a6:  sub    %ecx,%edi
087ab488 +0x0a8:  add    %ecx,%eax
087ab48a +0x0aa:  add    %ecx,%edx
087ab48c +0x0ac:  cmp    $0x40,%eax
087ab48f +0x0af:  mov    %eax,0x4(%esi)
087ab492 +0x0b2:  je     087ab500 <+0x120>
087ab494 +0x0b4:  test   %eax,%eax
087ab496 +0x0b6:  jne    087ab42c <+0x4c>
087ab498 +0x0b8:  jmp    087ab41f <+0x3f>
087ab49a +0x0ba:  lea    0x0(%esi),%esi
087ab4a0 +0x0c0:  mov    %edi,0x8(%esp)
087ab4a4 +0x0c4:  mov    %esi,(%esp)
087ab4a7 +0x0c7:  mov    %edx,0x4(%esp)
087ab4ab +0x0cb:  call   08758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>  ; TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int)
087ab4b0 +0x0d0:  mov    -0xc(%ebp),%ebx
087ab4b3 +0x0d3:  mov    -0x8(%ebp),%esi
087ab4b6 +0x0d6:  mov    -0x4(%ebp),%edi
087ab4b9 +0x0d9:  mov    %ebp,%esp
087ab4bb +0x0db:  pop    %ebp
087ab4bc +0x0dc:  ret
087ab4bd +0x0dd:  lea    0x0(%esi),%esi
087ab4c0 +0x0e0:  mov    %edx,0x4(%esp)
087ab4c4 +0x0e4:  mov    %edx,-0x20(%ebp)
087ab4c7 +0x0e7:  mov    %eax,0x8(%esp)
087ab4cb +0x0eb:  mov    %eax,-0x24(%ebp)
087ab4ce +0x0ee:  mov    %esi,(%esp)
087ab4d1 +0x0f1:  call   087aa300 <_ZN8TaoCrypt9RIPEMD16012AsmTransformEPKhj>  ; TaoCrypt::RIPEMD160::AsmTransform(unsigned char const*, unsigned int)
087ab4d6 +0x0f6:  mov    -0x24(%ebp),%eax
087ab4d9 +0x0f9:  mov    %esi,(%esp)
087ab4dc +0x0fc:  shl    $0x6,%eax
087ab4df +0x0ff:  mov    %eax,0x4(%esp)
087ab4e3 +0x103:  mov    %eax,-0x24(%ebp)
087ab4e6 +0x106:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
087ab4eb +0x10b:  mov    -0x24(%ebp),%eax
087ab4ee +0x10e:  mov    -0x20(%ebp),%edx
087ab4f1 +0x111:  sub    %eax,%edi
087ab4f3 +0x113:  add    %eax,%edx
087ab4f5 +0x115:  jmp    087ab42c <+0x4c>
087ab4fa +0x11a:  lea    0x0(%esi),%esi
087ab500 +0x120:  mov    (%esi),%eax
087ab502 +0x122:  mov    %edx,-0x20(%ebp)
087ab505 +0x125:  mov    %esi,(%esp)
087ab508 +0x128:  call   *0x24(%eax)
087ab50b +0x12b:  movl   $0x40,0x4(%esp)
087ab513 +0x133:  mov    %esi,(%esp)
087ab516 +0x136:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
087ab51b +0x13b:  mov    -0x20(%ebp),%edx
087ab51e +0x13e:  movl   $0x0,0x4(%esi)
087ab525 +0x145:  jmp    087ab41f <+0x3f>
087ab52a +0x14a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::Update @ 0x87ab3e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::RIPEMD160::Update(RIPEMD160 *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*PTR_isMMX_0936c5d0 == '\0') {
    HASHwithTransform::Update((HASHwithTransform *)this,param_1,param_2);
    return;
  }
  iVar2 = *(int *)(this + 4);
  if (iVar2 != 0) {
    uVar1 = 0x40U - iVar2;
    if (param_2 <= 0x40U - iVar2) {
      uVar1 = param_2;
    }
    memcpy(this + iVar2 + 0x30,param_1,uVar1);
    param_2 = param_2 - uVar1;
    iVar2 = *(int *)(this + 4) + uVar1;
    param_1 = param_1 + uVar1;
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0x40) {
      (**(code **)(*(int *)this + 0x24))(this);
      HASHwithTransform::AddLength((HASHwithTransform *)this,0x40);
      *(undefined4 *)(this + 4) = 0;
    }
    else if (iVar2 != 0) goto LAB_087ab42c;
  }
  uVar1 = param_2 >> 6;
  if (uVar1 != 0) {
    AsmTransform(this,param_1,uVar1);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar1 * 0x40);
    param_2 = param_2 + uVar1 * -0x40;
    param_1 = param_1 + uVar1 * 0x40;
  }
LAB_087ab42c:
  if (param_2 != 0) {
    memcpy(this + *(int *)(this + 4) + 0x30,param_1,param_2);
    *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  }
  return;
}
```
