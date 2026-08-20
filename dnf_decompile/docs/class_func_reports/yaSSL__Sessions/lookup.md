# lookup

`_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE`

`yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Sessions` | `0x08752e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752e60  _ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE
#           yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*)
# range [0x08752e60, 0x08752fd9]
08752e60 +0x000:  push   %ebp
08752e61 +0x001:  mov    %esp,%ebp
08752e63 +0x003:  push   %edi
08752e64 +0x004:  push   %esi
08752e65 +0x005:  push   %ebx
08752e66 +0x006:  sub    $0x2c,%esp
08752e69 +0x009:  mov    0x8(%ebp),%eax
08752e6c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08752e71 +0x011:  add    $0xc19d27,%ebx
08752e77 +0x017:  mov    (%eax),%edx
08752e79 +0x019:  test   %edx,%edx
08752e7b +0x01b:  je     08752ea3 <+0x43>
08752e7d +0x01d:  mov    0x8(%edx),%eax
08752e80 +0x020:  mov    %edx,-0x1c(%ebp)
08752e83 +0x023:  mov    %eax,(%esp)
08752e86 +0x026:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
08752e8b +0x02b:  mov    0xc(%ebp),%edi
08752e8e +0x02e:  mov    $0x20,%ecx
08752e93 +0x033:  mov    -0x1c(%ebp),%edx
08752e96 +0x036:  mov    %eax,%esi
08752e98 +0x038:  repz cmpsb %es:(%edi),%ds:(%esi)
08752e9a +0x03a:  je     08752eb0 <+0x50>
08752e9c +0x03c:  mov    0x4(%edx),%edx
08752e9f +0x03f:  test   %edx,%edx
08752ea1 +0x041:  jne    08752e7d <+0x1d>
08752ea3 +0x043:  add    $0x2c,%esp
08752ea6 +0x046:  xor    %eax,%eax
08752ea8 +0x048:  pop    %ebx
08752ea9 +0x049:  pop    %esi
08752eaa +0x04a:  pop    %edi
08752eab +0x04b:  pop    %ebp
08752eac +0x04c:  ret
08752ead +0x04d:  lea    0x0(%esi),%esi
08752eb0 +0x050:  mov    %edx,-0x1c(%ebp)
08752eb3 +0x053:  call   087a1750 <_ZN5yaSSL11lowResTimerEv>  ; yaSSL::lowResTimer()
08752eb8 +0x058:  mov    -0x1c(%ebp),%edx
08752ebb +0x05b:  mov    %eax,%esi
08752ebd +0x05d:  mov    0x8(%edx),%eax
08752ec0 +0x060:  mov    %eax,(%esp)
08752ec3 +0x063:  call   0874e360 <_ZNK5yaSSL11SSL_SESSION9GetBornOnEv>  ; yaSSL::SSL_SESSION::GetBornOn() const
08752ec8 +0x068:  mov    -0x1c(%ebp),%edx
08752ecb +0x06b:  mov    %eax,%edi
08752ecd +0x06d:  mov    0x8(%edx),%eax
08752ed0 +0x070:  mov    %eax,(%esp)
08752ed3 +0x073:  call   0874e370 <_ZNK5yaSSL11SSL_SESSION10GetTimeOutEv>  ; yaSSL::SSL_SESSION::GetTimeOut() const
08752ed8 +0x078:  mov    -0x1c(%ebp),%edx
08752edb +0x07b:  lea    (%eax,%edi,1),%edi
08752ede +0x07e:  cmp    %edi,%esi
08752ee0 +0x080:  ja     08752f10 <+0xb0>
08752ee2 +0x082:  mov    0x10(%ebp),%ecx
08752ee5 +0x085:  test   %ecx,%ecx
08752ee7 +0x087:  je     08752f01 <+0xa1>
08752ee9 +0x089:  mov    0x8(%edx),%eax
08752eec +0x08c:  mov    0x10(%ebp),%ecx
08752eef +0x08f:  mov    %edx,-0x1c(%ebp)
08752ef2 +0x092:  mov    %eax,0x4(%esp)
08752ef6 +0x096:  mov    %ecx,(%esp)
08752ef9 +0x099:  call   08752820 <_ZN5yaSSL11SSL_SESSIONaSERKS0_>  ; yaSSL::SSL_SESSION::operator=(yaSSL::SSL_SESSION const&)
08752efe +0x09e:  mov    -0x1c(%ebp),%edx
08752f01 +0x0a1:  mov    0x8(%edx),%eax
08752f04 +0x0a4:  add    $0x2c,%esp
08752f07 +0x0a7:  pop    %ebx
08752f08 +0x0a8:  pop    %esi
08752f09 +0x0a9:  pop    %edi
08752f0a +0x0aa:  pop    %ebp
08752f0b +0x0ab:  ret
08752f0c +0x0ac:  lea    0x0(%esi,%eiz,1),%esi
08752f10 +0x0b0:  mov    0x8(%edx),%esi
08752f13 +0x0b3:  movl   $0x0,0x8(%edx)
08752f1a +0x0ba:  test   %esi,%esi
08752f1c +0x0bc:  je     08752f2c <+0xcc>
08752f1e +0x0be:  mov    %edx,-0x1c(%ebp)
08752f21 +0x0c1:  mov    %esi,(%esp)
08752f24 +0x0c4:  call   08752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>  ; yaSSL::SSL_SESSION::~SSL_SESSION()
08752f29 +0x0c9:  mov    -0x1c(%ebp),%edx
08752f2c +0x0cc:  mov    %edx,-0x1c(%ebp)
08752f2f +0x0cf:  movb   $0x0,0x4(%esp)
08752f34 +0x0d4:  mov    %esi,(%esp)
08752f37 +0x0d7:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752f3c +0x0dc:  mov    0x8(%ebp),%ecx
08752f3f +0x0df:  mov    -0x1c(%ebp),%edx
08752f42 +0x0e2:  mov    (%ecx),%eax
08752f44 +0x0e4:  cmp    %edx,%eax
08752f46 +0x0e6:  je     08752f72 <+0x112>
08752f48 +0x0e8:  cmp    %edx,0x4(%ecx)
08752f4b +0x0eb:  je     08752fa0 <+0x140>
08752f4d +0x0ed:  mov    (%edx),%eax
08752f4f +0x0ef:  mov    0x4(%edx),%ecx
08752f52 +0x0f2:  mov    %ecx,0x4(%eax)
08752f55 +0x0f5:  mov    0x4(%edx),%ecx
08752f58 +0x0f8:  mov    %eax,(%ecx)
08752f5a +0x0fa:  mov    %edx,(%esp)
08752f5d +0x0fd:  movb   $0x0,0x4(%esp)
08752f62 +0x102:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752f67 +0x107:  mov    0x8(%ebp),%edx
08752f6a +0x10a:  xor    %eax,%eax
08752f6c +0x10c:  subl   $0x1,0x8(%edx)
08752f70 +0x110:  jmp    08752f04 <+0xa4>
08752f72 +0x112:  cmp    0x4(%ecx),%edx
08752f75 +0x115:  je     08752fc7 <+0x167>
08752f77 +0x117:  mov    0x4(%edx),%edx
08752f7a +0x11a:  mov    0x8(%ebp),%ecx
08752f7d +0x11d:  mov    %edx,(%ecx)
08752f7f +0x11f:  movl   $0x0,(%edx)
08752f85 +0x125:  mov    %eax,(%esp)
08752f88 +0x128:  movb   $0x0,0x4(%esp)
08752f8d +0x12d:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752f92 +0x132:  mov    0x8(%ebp),%eax
08752f95 +0x135:  subl   $0x1,0x8(%eax)
08752f99 +0x139:  xor    %eax,%eax
08752f9b +0x13b:  jmp    08752f04 <+0xa4>
08752fa0 +0x140:  mov    (%edx),%eax
08752fa2 +0x142:  mov    %eax,0x4(%ecx)
08752fa5 +0x145:  movl   $0x0,0x4(%eax)
08752fac +0x14c:  movb   $0x0,0x4(%esp)
08752fb1 +0x151:  mov    %edx,(%esp)
08752fb4 +0x154:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752fb9 +0x159:  mov    0x8(%ebp),%eax
08752fbc +0x15c:  subl   $0x1,0x8(%eax)
08752fc0 +0x160:  xor    %eax,%eax
08752fc2 +0x162:  jmp    08752f04 <+0xa4>
08752fc7 +0x167:  movl   $0x0,0x4(%ecx)
08752fce +0x16e:  movl   $0x0,(%ecx)
08752fd4 +0x174:  jmp    08752f85 <+0x125>
08752fd6 +0x176:  lea    0x0(%esi),%esi
08752fd9 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Sessions::lookup @ 0x8752e60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*) */

int __thiscall yaSSL::Sessions::lookup(Sessions *this,uchar *param_1,SSL_SESSION *param_2)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  undefined1 uVar9;
  byte bVar10;
  uint in_stack_ffffffc8;
  uint3 uVar11;
  
  bVar10 = 0;
  piVar1 = *(int **)this;
  do {
    uVar9 = piVar1 == (int *)0x0;
    if ((bool)uVar9) {
      return 0;
    }
    puVar4 = (uchar *)SSL_SESSION::GetID((SSL_SESSION *)piVar1[2]);
    iVar7 = 0x20;
    puVar8 = param_1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      uVar9 = *puVar4 == *puVar8;
      puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    } while ((bool)uVar9);
    if ((bool)uVar9) {
      uVar5 = lowResTimer();
      iVar7 = SSL_SESSION::GetBornOn((SSL_SESSION *)piVar1[2]);
      iVar6 = SSL_SESSION::GetTimeOut((SSL_SESSION *)piVar1[2]);
      if ((uint)(iVar6 + iVar7) < uVar5) {
        this_00 = (SSL_SESSION *)piVar1[2];
        piVar1[2] = 0;
        if (this_00 != (SSL_SESSION *)0x0) {
          SSL_SESSION::~SSL_SESSION(this_00);
        }
        in_stack_ffffffc8 = in_stack_ffffffc8 & 0xffffff00;
        operator_delete(this_00,in_stack_ffffffc8);
        piVar2 = *(int **)this;
        uVar11 = (uint3)(in_stack_ffffffc8 >> 8);
        if (piVar2 == piVar1) {
          if (piVar1 == *(int **)(this + 4)) {
            *(undefined4 *)(this + 4) = 0;
            *(undefined4 *)this = 0;
          }
          else {
            puVar3 = (undefined4 *)piVar1[1];
            *(undefined4 **)this = puVar3;
            *puVar3 = 0;
          }
          operator_delete__(piVar2,(uint)uVar11 << 8);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          iVar7 = 0;
        }
        else if (*(int **)(this + 4) == piVar1) {
          iVar7 = *piVar1;
          *(int *)(this + 4) = iVar7;
          *(undefined4 *)(iVar7 + 4) = 0;
          operator_delete__(piVar1,(uint)uVar11 << 8);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar1;
          *(int *)(iVar7 + 4) = piVar1[1];
          *(int *)piVar1[1] = iVar7;
          operator_delete__(piVar1,in_stack_ffffffc8 & 0xffffff00);
          iVar7 = 0;
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
        }
      }
      else {
        if (param_2 != (SSL_SESSION *)0x0) {
          SSL_SESSION::operator=(param_2,(SSL_SESSION *)piVar1[2]);
        }
        iVar7 = piVar1[2];
      }
      return iVar7;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}
```
