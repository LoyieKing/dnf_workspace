# Flush

`_ZN5yaSSL8Sessions5FlushEv`

`yaSSL::Sessions::Flush()`

| 类 | 地址 |
|---|---|
| `yaSSL::Sessions` | `0x087530a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087530a0  _ZN5yaSSL8Sessions5FlushEv
#           yaSSL::Sessions::Flush()
# range [0x087530a0, 0x087531dc]
087530a0 +0x000:  push   %ebp
087530a1 +0x001:  mov    %esp,%ebp
087530a3 +0x003:  push   %edi
087530a4 +0x004:  push   %esi
087530a5 +0x005:  push   %ebx
087530a6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087530ab +0x00b:  add    $0xc19aed,%ebx
087530b1 +0x011:  sub    $0x2c,%esp
087530b4 +0x014:  mov    0x8(%ebp),%eax
087530b7 +0x017:  mov    (%eax),%esi
087530b9 +0x019:  call   087a1750 <_ZN5yaSSL11lowResTimerEv>  ; yaSSL::lowResTimer()
087530be +0x01e:  test   %esi,%esi
087530c0 +0x020:  mov    %eax,-0x20(%ebp)
087530c3 +0x023:  jne    087530da <+0x3a>
087530c5 +0x025:  jmp    08753160 <+0xc0>
087530ca +0x02a:  lea    0x0(%esi),%esi
087530d0 +0x030:  test   %edi,%edi
087530d2 +0x032:  je     08753160 <+0xc0>
087530d8 +0x038:  mov    %edi,%esi
087530da +0x03a:  mov    0x8(%esi),%eax
087530dd +0x03d:  mov    0x4(%esi),%edi
087530e0 +0x040:  mov    %eax,(%esp)
087530e3 +0x043:  call   0874e360 <_ZNK5yaSSL11SSL_SESSION9GetBornOnEv>  ; yaSSL::SSL_SESSION::GetBornOn() const
087530e8 +0x048:  mov    %eax,-0x1c(%ebp)
087530eb +0x04b:  mov    0x8(%esi),%eax
087530ee +0x04e:  mov    %eax,(%esp)
087530f1 +0x051:  call   0874e370 <_ZNK5yaSSL11SSL_SESSION10GetTimeOutEv>  ; yaSSL::SSL_SESSION::GetTimeOut() const
087530f6 +0x056:  add    -0x1c(%ebp),%eax
087530f9 +0x059:  cmp    %eax,-0x20(%ebp)
087530fc +0x05c:  jbe    087530d0 <+0x30>
087530fe +0x05e:  mov    0x8(%esi),%eax
08753101 +0x061:  movl   $0x0,0x8(%esi)
08753108 +0x068:  test   %eax,%eax
0875310a +0x06a:  je     0875311a <+0x7a>
0875310c +0x06c:  mov    %eax,(%esp)
0875310f +0x06f:  mov    %eax,-0x24(%ebp)
08753112 +0x072:  call   08752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>  ; yaSSL::SSL_SESSION::~SSL_SESSION()
08753117 +0x077:  mov    -0x24(%ebp),%eax
0875311a +0x07a:  mov    %eax,(%esp)
0875311d +0x07d:  movb   $0x0,0x4(%esp)
08753122 +0x082:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08753127 +0x087:  mov    0x8(%ebp),%edx
0875312a +0x08a:  mov    (%edx),%eax
0875312c +0x08c:  cmp    %esi,%eax
0875312e +0x08e:  je     08753178 <+0xd8>
08753130 +0x090:  cmp    %esi,0x4(%edx)
08753133 +0x093:  je     087531a8 <+0x108>
08753135 +0x095:  mov    (%esi),%eax
08753137 +0x097:  mov    0x4(%esi),%edx
0875313a +0x09a:  mov    %edx,0x4(%eax)
0875313d +0x09d:  mov    0x4(%esi),%edx
08753140 +0x0a0:  mov    %eax,(%edx)
08753142 +0x0a2:  movb   $0x0,0x4(%esp)
08753147 +0x0a7:  mov    %esi,(%esp)
0875314a +0x0aa:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0875314f +0x0af:  mov    0x8(%ebp),%eax
08753152 +0x0b2:  subl   $0x1,0x8(%eax)
08753156 +0x0b6:  test   %edi,%edi
08753158 +0x0b8:  jne    087530d8 <+0x38>
0875315e +0x0be:  xchg   %ax,%ax
08753160 +0x0c0:  mov    0x8(%ebp),%edx
08753163 +0x0c3:  movl   $0x0,0x14(%edx)
0875316a +0x0ca:  add    $0x2c,%esp
0875316d +0x0cd:  pop    %ebx
0875316e +0x0ce:  pop    %esi
0875316f +0x0cf:  pop    %edi
08753170 +0x0d0:  pop    %ebp
08753171 +0x0d1:  ret
08753172 +0x0d2:  lea    0x0(%esi),%esi
08753178 +0x0d8:  cmp    0x4(%edx),%esi
0875317b +0x0db:  je     087531cd <+0x12d>
0875317d +0x0dd:  mov    0x4(%esi),%edx
08753180 +0x0e0:  mov    0x8(%ebp),%ecx
08753183 +0x0e3:  mov    %edx,(%ecx)
08753185 +0x0e5:  movl   $0x0,(%edx)
0875318b +0x0eb:  mov    %eax,(%esp)
0875318e +0x0ee:  movb   $0x0,0x4(%esp)
08753193 +0x0f3:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08753198 +0x0f8:  mov    0x8(%ebp),%eax
0875319b +0x0fb:  subl   $0x1,0x8(%eax)
0875319f +0x0ff:  jmp    087530d0 <+0x30>
087531a4 +0x104:  lea    0x0(%esi,%eiz,1),%esi
087531a8 +0x108:  mov    (%esi),%eax
087531aa +0x10a:  mov    %eax,0x4(%edx)
087531ad +0x10d:  movl   $0x0,0x4(%eax)
087531b4 +0x114:  movb   $0x0,0x4(%esp)
087531b9 +0x119:  mov    %esi,(%esp)
087531bc +0x11c:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087531c1 +0x121:  mov    0x8(%ebp),%ecx
087531c4 +0x124:  subl   $0x1,0x8(%ecx)
087531c8 +0x128:  jmp    087530d0 <+0x30>
087531cd +0x12d:  movl   $0x0,0x4(%edx)
087531d4 +0x134:  movl   $0x0,(%edx)
087531da +0x13a:  jmp    0875318b <+0xeb>
087531dc +0x13c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Sessions::Flush @ 0x87530a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::Flush() */

void __thiscall yaSSL::Sessions::Flush(Sessions *this)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)this;
  uVar5 = lowResTimer();
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[1];
    iVar6 = SSL_SESSION::GetBornOn((SSL_SESSION *)piVar4[2]);
    iVar7 = SSL_SESSION::GetTimeOut((SSL_SESSION *)piVar4[2]);
    if ((uint)(iVar7 + iVar6) < uVar5) {
      this_00 = (SSL_SESSION *)piVar4[2];
      piVar4[2] = 0;
      if (this_00 != (SSL_SESSION *)0x0) {
        SSL_SESSION::~SSL_SESSION(this_00);
      }
      operator_delete(this_00,0);
      piVar2 = *(int **)this;
      if (piVar2 == piVar4) {
        if (piVar4 == *(int **)(this + 4)) {
          *(undefined4 *)(this + 4) = 0;
          *(undefined4 *)this = 0;
        }
        else {
          puVar3 = (undefined4 *)piVar4[1];
          *(undefined4 **)this = puVar3;
          *puVar3 = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else if (*(int **)(this + 4) == piVar4) {
        iVar6 = *piVar4;
        *(int *)(this + 4) = iVar6;
        *(undefined4 *)(iVar6 + 4) = 0;
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else {
        iVar6 = *piVar4;
        *(int *)(iVar6 + 4) = piVar4[1];
        *(int *)piVar4[1] = iVar6;
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
    }
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}
```
