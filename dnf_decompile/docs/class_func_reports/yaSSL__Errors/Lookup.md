# Lookup

`_ZN5yaSSL6Errors6LookupEb`

`yaSSL::Errors::Lookup(bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Errors` | `0x08750920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750920  _ZN5yaSSL6Errors6LookupEb
#           yaSSL::Errors::Lookup(bool)
# range [0x08750920, 0x08750a2f]
08750920 +0x000:  push   %ebp
08750921 +0x001:  mov    %esp,%ebp
08750923 +0x003:  push   %edi
08750924 +0x004:  push   %esi
08750925 +0x005:  push   %ebx
08750926 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875092b +0x00b:  add    $0xc1c26d,%ebx
08750931 +0x011:  sub    $0x3c,%esp
08750934 +0x014:  mov    0x8(%ebp),%edi
08750937 +0x017:  movzbl 0xc(%ebp),%esi
0875093b +0x01b:  call   0874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>  ; yaSSL::yassl_int_cpp_local2::GetSelf()
08750940 +0x020:  mov    (%edi),%ecx
08750942 +0x022:  test   %ecx,%ecx
08750944 +0x024:  je     08750a23 <+0x103>
0875094a +0x02a:  cmp    0x8(%ecx),%eax
0875094d +0x02d:  mov    %ecx,%edx
0875094f +0x02f:  je     087509b8 <+0x98>
08750951 +0x031:  lea    0x0(%esi,%eiz,1),%esi
08750958 +0x038:  mov    0x4(%edx),%edx
0875095b +0x03b:  test   %edx,%edx
0875095d +0x03d:  je     08750a23 <+0x103>
08750963 +0x043:  cmp    0x8(%edx),%eax
08750966 +0x046:  jne    08750958 <+0x38>
08750968 +0x048:  mov    0xc(%edx),%eax
0875096b +0x04b:  mov    %eax,-0x2c(%ebp)
0875096e +0x04e:  mov    %esi,%eax
08750970 +0x050:  test   %al,%al
08750972 +0x052:  je     08750980 <+0x60>
08750974 +0x054:  mov    -0x2c(%ebp),%eax
08750977 +0x057:  add    $0x3c,%esp
0875097a +0x05a:  pop    %ebx
0875097b +0x05b:  pop    %esi
0875097c +0x05c:  pop    %edi
0875097d +0x05d:  pop    %ebp
0875097e +0x05e:  ret
0875097f +0x05f:  nop
08750980 +0x060:  cmp    %edx,%ecx
08750982 +0x062:  je     087509bc <+0x9c>
08750984 +0x064:  mov    0x4(%edi),%esi
08750987 +0x067:  cmp    %edx,%esi
08750989 +0x069:  je     087509df <+0xbf>
0875098b +0x06b:  mov    (%edx),%ecx
0875098d +0x06d:  mov    0x4(%edx),%esi
08750990 +0x070:  mov    %esi,0x4(%ecx)
08750993 +0x073:  mov    0x4(%edx),%esi
08750996 +0x076:  mov    %ecx,(%esi)
08750998 +0x078:  movb   $0x0,0x4(%esp)
0875099d +0x07d:  mov    %edx,(%esp)
087509a0 +0x080:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087509a5 +0x085:  mov    -0x2c(%ebp),%eax
087509a8 +0x088:  subl   $0x1,0x8(%edi)
087509ac +0x08c:  add    $0x3c,%esp
087509af +0x08f:  pop    %ebx
087509b0 +0x090:  pop    %esi
087509b1 +0x091:  pop    %edi
087509b2 +0x092:  pop    %ebp
087509b3 +0x093:  ret
087509b4 +0x094:  lea    0x0(%esi,%eiz,1),%esi
087509b8 +0x098:  mov    %ecx,%edx
087509ba +0x09a:  jmp    08750968 <+0x48>
087509bc +0x09c:  cmp    0x4(%edi),%ecx
087509bf +0x09f:  je     08750a05 <+0xe5>
087509c1 +0x0a1:  mov    0x4(%ecx),%edx
087509c4 +0x0a4:  mov    %edx,(%edi)
087509c6 +0x0a6:  movl   $0x0,(%edx)
087509cc +0x0ac:  movb   $0x0,0x4(%esp)
087509d1 +0x0b1:  mov    %ecx,(%esp)
087509d4 +0x0b4:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087509d9 +0x0b9:  subl   $0x1,0x8(%edi)
087509dd +0x0bd:  jmp    08750974 <+0x54>
087509df +0x0bf:  cmp    %edx,%ecx
087509e1 +0x0c1:  je     08750a14 <+0xf4>
087509e3 +0x0c3:  mov    (%edx),%edx
087509e5 +0x0c5:  mov    %edx,0x4(%edi)
087509e8 +0x0c8:  movl   $0x0,0x4(%edx)
087509ef +0x0cf:  movb   $0x0,0x4(%esp)
087509f4 +0x0d4:  mov    %esi,(%esp)
087509f7 +0x0d7:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087509fc +0x0dc:  subl   $0x1,0x8(%edi)
08750a00 +0x0e0:  jmp    08750974 <+0x54>
08750a05 +0x0e5:  movl   $0x0,0x4(%edi)
08750a0c +0x0ec:  movl   $0x0,(%edi)
08750a12 +0x0f2:  jmp    087509cc <+0xac>
08750a14 +0x0f4:  movl   $0x0,(%edi)
08750a1a +0x0fa:  movl   $0x0,0x4(%edi)
08750a21 +0x101:  jmp    087509ef <+0xcf>
08750a23 +0x103:  movl   $0x0,-0x2c(%ebp)
08750a2a +0x10a:  jmp    08750974 <+0x54>
08750a2f +0x10f:  nop
```

## 反编译 C

```c
// yaSSL::Errors::Lookup @ 0x8750920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Lookup(bool) */

int __thiscall yaSSL::Errors::Lookup(Errors *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_30;
  
  iVar6 = yassl_int_cpp_local2::GetSelf();
  piVar2 = *(int **)this;
  if (piVar2 == (int *)0x0) {
LAB_08750a23:
    local_30 = 0;
  }
  else {
    iVar1 = piVar2[2];
    piVar3 = piVar2;
    while (iVar6 != iVar1) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) goto LAB_08750a23;
      iVar1 = piVar3[2];
    }
    local_30 = piVar3[3];
    if (!param_1) {
      if (piVar2 == piVar3) {
        if (piVar2 == *(int **)(this + 4)) {
          *(undefined4 *)(this + 4) = 0;
          *(undefined4 *)this = 0;
        }
        else {
          puVar5 = (undefined4 *)piVar2[1];
          *(undefined4 **)this = puVar5;
          *puVar5 = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else {
        piVar4 = *(int **)(this + 4);
        if (piVar4 != piVar3) {
          iVar6 = *piVar3;
          *(int *)(iVar6 + 4) = piVar3[1];
          *(int *)piVar3[1] = iVar6;
          operator_delete__(piVar3,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return local_30;
        }
        if (piVar2 == piVar3) {
          *(undefined4 *)this = 0;
          *(undefined4 *)(this + 4) = 0;
        }
        else {
          iVar6 = *piVar3;
          *(int *)(this + 4) = iVar6;
          *(undefined4 *)(iVar6 + 4) = 0;
        }
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
    }
  }
  return local_30;
}
```
