# Update

`_ZN8TaoCrypt3MD56UpdateEPKhj`

`TaoCrypt::MD5::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x08767100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767100  _ZN8TaoCrypt3MD56UpdateEPKhj
#           TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
# range [0x08767100, 0x0876724a]
08767100 +0x000:  push   %ebp
08767101 +0x001:  mov    %esp,%ebp
08767103 +0x003:  sub    $0x38,%esp
08767106 +0x006:  mov    %ebx,-0xc(%ebp)
08767109 +0x009:  mov    0xc(%ebp),%edx
0876710c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08767111 +0x011:  add    $0xc05a87,%ebx
08767117 +0x017:  mov    %esi,-0x8(%ebp)
0876711a +0x01a:  mov    0x8(%ebp),%esi
0876711d +0x01d:  mov    %edi,-0x4(%ebp)
08767120 +0x020:  mov    0x10(%ebp),%edi
08767123 +0x023:  mov    -0x5c8(%ebx),%eax
08767129 +0x029:  cmpb   $0x0,(%eax)
0876712c +0x02c:  je     087671c0 <+0xc0>
08767132 +0x032:  lea    0x30(%esi),%eax
08767135 +0x035:  mov    %eax,-0x1c(%ebp)
08767138 +0x038:  mov    0x4(%esi),%eax
0876713b +0x03b:  test   %eax,%eax
0876713d +0x03d:  jne    08767178 <+0x78>
0876713f +0x03f:  mov    %edi,%eax
08767141 +0x041:  shr    $0x6,%eax
08767144 +0x044:  test   %eax,%eax
08767146 +0x046:  jne    087671e0 <+0xe0>
0876714c +0x04c:  test   %edi,%edi
0876714e +0x04e:  je     08767169 <+0x69>
08767150 +0x050:  mov    -0x1c(%ebp),%eax
08767153 +0x053:  add    0x4(%esi),%eax
08767156 +0x056:  mov    %edi,0x8(%esp)
0876715a +0x05a:  mov    %edx,0x4(%esp)
0876715e +0x05e:  mov    %eax,(%esp)
08767161 +0x061:  call   0807d8a0 <_init+0x198>
08767166 +0x066:  add    %edi,0x4(%esi)
08767169 +0x069:  mov    -0xc(%ebp),%ebx
0876716c +0x06c:  mov    -0x8(%ebp),%esi
0876716f +0x06f:  mov    -0x4(%ebp),%edi
08767172 +0x072:  mov    %ebp,%esp
08767174 +0x074:  pop    %ebp
08767175 +0x075:  ret
08767176 +0x076:  xchg   %ax,%ax
08767178 +0x078:  mov    $0x40,%ecx
0876717d +0x07d:  sub    %eax,%ecx
0876717f +0x07f:  cmp    %ecx,%edi
08767181 +0x081:  cmovbe %edi,%ecx
08767184 +0x084:  add    -0x1c(%ebp),%eax
08767187 +0x087:  mov    %ecx,0x8(%esp)
0876718b +0x08b:  mov    %edx,0x4(%esp)
0876718f +0x08f:  mov    %edx,-0x20(%ebp)
08767192 +0x092:  mov    %ecx,-0x24(%ebp)
08767195 +0x095:  mov    %eax,(%esp)
08767198 +0x098:  call   0807d8a0 <_init+0x198>
0876719d +0x09d:  mov    -0x24(%ebp),%ecx
087671a0 +0x0a0:  mov    0x4(%esi),%eax
087671a3 +0x0a3:  mov    -0x20(%ebp),%edx
087671a6 +0x0a6:  sub    %ecx,%edi
087671a8 +0x0a8:  add    %ecx,%eax
087671aa +0x0aa:  add    %ecx,%edx
087671ac +0x0ac:  cmp    $0x40,%eax
087671af +0x0af:  mov    %eax,0x4(%esi)
087671b2 +0x0b2:  je     08767220 <+0x120>
087671b4 +0x0b4:  test   %eax,%eax
087671b6 +0x0b6:  jne    0876714c <+0x4c>
087671b8 +0x0b8:  jmp    0876713f <+0x3f>
087671ba +0x0ba:  lea    0x0(%esi),%esi
087671c0 +0x0c0:  mov    %edi,0x8(%esp)
087671c4 +0x0c4:  mov    %esi,(%esp)
087671c7 +0x0c7:  mov    %edx,0x4(%esp)
087671cb +0x0cb:  call   08758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>  ; TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int)
087671d0 +0x0d0:  mov    -0xc(%ebp),%ebx
087671d3 +0x0d3:  mov    -0x8(%ebp),%esi
087671d6 +0x0d6:  mov    -0x4(%ebp),%edi
087671d9 +0x0d9:  mov    %ebp,%esp
087671db +0x0db:  pop    %ebp
087671dc +0x0dc:  ret
087671dd +0x0dd:  lea    0x0(%esi),%esi
087671e0 +0x0e0:  mov    %edx,0x4(%esp)
087671e4 +0x0e4:  mov    %edx,-0x20(%ebp)
087671e7 +0x0e7:  mov    %eax,0x8(%esp)
087671eb +0x0eb:  mov    %eax,-0x24(%ebp)
087671ee +0x0ee:  mov    %esi,(%esp)
087671f1 +0x0f1:  call   08766210 <_ZN8TaoCrypt3MD512AsmTransformEPKhj>  ; TaoCrypt::MD5::AsmTransform(unsigned char const*, unsigned int)
087671f6 +0x0f6:  mov    -0x24(%ebp),%eax
087671f9 +0x0f9:  mov    %esi,(%esp)
087671fc +0x0fc:  shl    $0x6,%eax
087671ff +0x0ff:  mov    %eax,0x4(%esp)
08767203 +0x103:  mov    %eax,-0x24(%ebp)
08767206 +0x106:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
0876720b +0x10b:  mov    -0x24(%ebp),%eax
0876720e +0x10e:  mov    -0x20(%ebp),%edx
08767211 +0x111:  sub    %eax,%edi
08767213 +0x113:  add    %eax,%edx
08767215 +0x115:  jmp    0876714c <+0x4c>
0876721a +0x11a:  lea    0x0(%esi),%esi
08767220 +0x120:  mov    (%esi),%eax
08767222 +0x122:  mov    %edx,-0x20(%ebp)
08767225 +0x125:  mov    %esi,(%esp)
08767228 +0x128:  call   *0x24(%eax)
0876722b +0x12b:  movl   $0x40,0x4(%esp)
08767233 +0x133:  mov    %esi,(%esp)
08767236 +0x136:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
0876723b +0x13b:  mov    -0x20(%ebp),%edx
0876723e +0x13e:  movl   $0x0,0x4(%esi)
08767245 +0x145:  jmp    0876713f <+0x3f>
0876724a +0x14a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::MD5::Update @ 0x8767100

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD5::Update(MD5 *this,uchar *param_1,uint param_2)

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
    else if (iVar2 != 0) goto LAB_0876714c;
  }
  uVar1 = param_2 >> 6;
  if (uVar1 != 0) {
    AsmTransform(this,param_1,uVar1);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar1 * 0x40);
    param_2 = param_2 + uVar1 * -0x40;
    param_1 = param_1 + uVar1 * 0x40;
  }
LAB_0876714c:
  if (param_2 != 0) {
    memcpy(this + *(int *)(this + 4) + 0x30,param_1,param_2);
    *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  }
  return;
}
```
