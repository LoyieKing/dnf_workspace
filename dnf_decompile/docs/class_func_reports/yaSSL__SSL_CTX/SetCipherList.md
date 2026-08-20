# SetCipherList

`_ZN5yaSSL7SSL_CTX13SetCipherListEPKc`

`yaSSL::SSL_CTX::SetCipherList(char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874f4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f4a0  _ZN5yaSSL7SSL_CTX13SetCipherListEPKc
#           yaSSL::SSL_CTX::SetCipherList(char const*)
# range [0x0874f4a0, 0x0874f5fc]
0874f4a0 +0x000:  push   %ebp
0874f4a1 +0x001:  mov    %esp,%ebp
0874f4a3 +0x003:  push   %edi
0874f4a4 +0x004:  push   %esi
0874f4a5 +0x005:  push   %ebx
0874f4a6 +0x006:  sub    $0x7c,%esp
0874f4a9 +0x009:  mov    0xc(%ebp),%ecx
0874f4ac +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f4b1 +0x011:  add    $0xc1d6e7,%ebx
0874f4b7 +0x017:  movb   $0x0,-0x61(%ebp)
0874f4bb +0x01b:  test   %ecx,%ecx
0874f4bd +0x01d:  je     0874f5ef <+0x14f>
0874f4c3 +0x023:  movzwl -0x570bd2(%ebx),%eax
0874f4ca +0x02a:  lea    -0x4a(%ebp),%esi
0874f4cd +0x02d:  movl   $0x0,-0x5c(%ebp)
0874f4d4 +0x034:  mov    %ax,-0x1a(%ebp)
0874f4d8 +0x038:  lea    -0x1a(%ebp),%eax
0874f4db +0x03b:  mov    %eax,-0x68(%ebp)
0874f4de +0x03e:  mov    %eax,%edx
0874f4e0 +0x040:  mov    %ecx,(%esp)
0874f4e3 +0x043:  mov    %edx,0x4(%esp)
0874f4e7 +0x047:  mov    %ecx,-0x6c(%ebp)
0874f4ea +0x04a:  call   0807dac0 <_init+0x3b8>
0874f4ef +0x04f:  mov    -0x6c(%ebp),%ecx
0874f4f2 +0x052:  test   %eax,%eax
0874f4f4 +0x054:  mov    %eax,%edi
0874f4f6 +0x056:  je     0874f595 <+0xf5>
0874f4fc +0x05c:  mov    %eax,%edx
0874f4fe +0x05e:  sub    %ecx,%edx
0874f500 +0x060:  cmp    $0x30,%edx
0874f503 +0x063:  ja     0874f5b0 <+0x110>
0874f509 +0x069:  mov    %edx,0x8(%esp)
0874f50d +0x06d:  mov    %edx,-0x6c(%ebp)
0874f510 +0x070:  mov    %ecx,0x4(%esp)
0874f514 +0x074:  mov    %esi,(%esp)
0874f517 +0x077:  call   0807d8d0 <_init+0x1c8>
0874f51c +0x07c:  mov    -0x6c(%ebp),%edx
0874f51f +0x07f:  cmp    $0x30,%edx
0874f522 +0x082:  je     0874f5c4 <+0x124>
0874f528 +0x088:  movb   $0x0,-0x4a(%ebp,%edx,1)
0874f52d +0x08d:  xor    %edx,%edx
0874f52f +0x08f:  mov    %edi,-0x60(%ebp)
0874f532 +0x092:  mov    %esi,%edi
0874f534 +0x094:  mov    %edx,%esi
0874f536 +0x096:  jmp    0874f547 <+0xa7>
0874f538 +0x098:  add    $0x1,%esi
0874f53b +0x09b:  cmp    $0x80,%esi
0874f541 +0x0a1:  je     0874f5d0 <+0x130>
0874f547 +0x0a7:  mov    -0x2a98(%ebx,%esi,4),%eax
0874f54e +0x0ae:  movl   $0x30,0x8(%esp)
0874f556 +0x0b6:  mov    %edi,(%esp)
0874f559 +0x0b9:  mov    %eax,0x4(%esp)
0874f55d +0x0bd:  call   0807e8c0 <_init+0x11b8>
0874f562 +0x0c2:  test   %eax,%eax
0874f564 +0x0c4:  jne    0874f538 <+0x98>
0874f566 +0x0c6:  mov    -0x5c(%ebp),%ecx
0874f569 +0x0c9:  mov    %esi,%edx
0874f56b +0x0cb:  mov    %edi,%esi
0874f56d +0x0cd:  mov    0x8(%ebp),%eax
0874f570 +0x0d0:  mov    -0x60(%ebp),%edi
0874f573 +0x0d3:  movb   $0x0,0x19(%eax,%ecx,1)
0874f578 +0x0d8:  mov    %dl,0x1a(%eax,%ecx,1)
0874f57c +0x0dc:  add    $0x2,%ecx
0874f57f +0x0df:  test   %edi,%edi
0874f581 +0x0e1:  mov    %ecx,-0x5c(%ebp)
0874f584 +0x0e4:  movb   $0x1,-0x61(%ebp)
0874f588 +0x0e8:  je     0874f5d9 <+0x139>
0874f58a +0x0ea:  lea    0x1(%edi),%ecx
0874f58d +0x0ed:  mov    -0x68(%ebp),%edx
0874f590 +0x0f0:  jmp    0874f4e0 <+0x40>
0874f595 +0x0f5:  mov    %ecx,(%esp)
0874f598 +0x0f8:  call   0807e3b0 <_init+0xca8>
0874f59d +0x0fd:  mov    -0x6c(%ebp),%ecx
0874f5a0 +0x100:  cmp    $0x30,%eax
0874f5a3 +0x103:  mov    %eax,%edx
0874f5a5 +0x105:  jbe    0874f509 <+0x69>
0874f5ab +0x10b:  nop
0874f5ac +0x10c:  lea    0x0(%esi,%eiz,1),%esi
0874f5b0 +0x110:  movl   $0x30,0x8(%esp)
0874f5b8 +0x118:  mov    %ecx,0x4(%esp)
0874f5bc +0x11c:  mov    %esi,(%esp)
0874f5bf +0x11f:  call   0807d8d0 <_init+0x1c8>
0874f5c4 +0x124:  mov    $0x2f,%edx
0874f5c9 +0x129:  jmp    0874f528 <+0x88>
0874f5ce +0x12e:  xchg   %ax,%ax
0874f5d0 +0x130:  mov    %edi,%esi
0874f5d2 +0x132:  mov    -0x60(%ebp),%edi
0874f5d5 +0x135:  test   %edi,%edi
0874f5d7 +0x137:  jne    0874f58a <+0xea>
0874f5d9 +0x139:  cmpb   $0x0,-0x61(%ebp)
0874f5dd +0x13d:  je     0874f5ef <+0x14f>
0874f5df +0x13f:  mov    0x8(%ebp),%edx
0874f5e2 +0x142:  mov    -0x5c(%ebp),%ecx
0874f5e5 +0x145:  movb   $0x1,0x18(%edx)
0874f5e9 +0x149:  mov    %ecx,0x9c(%edx)
0874f5ef +0x14f:  movzbl -0x61(%ebp),%eax
0874f5f3 +0x153:  add    $0x7c,%esp
0874f5f6 +0x156:  pop    %ebx
0874f5f7 +0x157:  pop    %esi
0874f5f8 +0x158:  pop    %edi
0874f5f9 +0x159:  pop    %ebp
0874f5fa +0x15a:  ret
0874f5fb +0x15b:  nop
0874f5fc +0x15c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SetCipherList @ 0x874f4a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SetCipherList(char const*) */

char __thiscall yaSSL::SSL_CTX::SetCipherList(SSL_CTX *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  char local_65;
  int local_60;
  char local_4e [48];
  char local_1e [14];
  
  local_65 = '\0';
  if (param_1 == (char *)0x0) {
    return '\0';
  }
  local_1e._0_2_ = s_Generator__compressed___08dfbfb0._22_2_;
  local_60 = 0;
  do {
    pcVar1 = strstr(param_1,local_1e);
    if (pcVar1 == (char *)0x0) {
      __n = strlen(param_1);
      if (0x30 < __n) goto LAB_0874f5b0;
LAB_0874f509:
      strncpy(local_4e,param_1,__n);
      if (__n == 0x30) goto LAB_0874f5c4;
    }
    else {
      __n = (int)pcVar1 - (int)param_1;
      if (__n < 0x31) goto LAB_0874f509;
LAB_0874f5b0:
      strncpy(local_4e,param_1,0x30);
LAB_0874f5c4:
      __n = 0x2f;
    }
    local_4e[__n] = '\0';
    iVar3 = 0;
    do {
      iVar2 = strncmp(local_4e,(&cipher_names)[iVar3],0x30);
      if (iVar2 == 0) {
        this[local_60 + 0x19] = (SSL_CTX)0x0;
        this[local_60 + 0x1a] = SUB41(iVar3,0);
        local_60 = local_60 + 2;
        local_65 = '\x01';
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x80);
    if (pcVar1 == (char *)0x0) {
      if (local_65 == '\0') {
        s_Generator__compressed___08dfbfb0[0x16] = (char)s_Generator__compressed___08dfbfb0._22_2_;
        s_Generator__compressed___08dfbfb0[0x17] =
             SUB21(s_Generator__compressed___08dfbfb0._22_2_,1);
        return '\0';
      }
      this[0x18] = (SSL_CTX)0x1;
      *(int *)(this + 0x9c) = local_60;
      return local_65;
    }
    param_1 = pcVar1 + 1;
  } while( true );
}
```
