# dispatch_sig

`_ZN12Inter_Notice12dispatch_sigEP5CUserPci`

`Inter_Notice::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Notice` | `0x084c5212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c5212  _ZN12Inter_Notice12dispatch_sigEP5CUserPci
#           Inter_Notice::dispatch_sig(CUser*, char*, int)
# range [0x084c5212, 0x084c5289]
084c5212 +0x00:  push   %ebp
084c5213 +0x01:  mov    %esp,%ebp
084c5215 +0x03:  push   %esi
084c5216 +0x04:  push   %ebx
084c5217 +0x05:  sub    $0x40,%esp
084c521a +0x08:  mov    0x10(%ebp),%eax
084c521d +0x0b:  mov    %eax,-0xc(%ebp)
084c5220 +0x0e:  mov    -0xc(%ebp),%eax
084c5223 +0x11:  movzbl 0x51(%eax),%eax
084c5227 +0x15:  movsbl %al,%ebx
084c522a +0x18:  mov    -0xc(%ebp),%eax
084c522d +0x1b:  lea    0x1(%eax),%esi
084c5230 +0x1e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c5235 +0x23:  movl   $0xc,0x24(%esp)
084c523d +0x2b:  movl   $0x0,0x20(%esp)
084c5245 +0x33:  movl   $0x0,0x1c(%esp)
084c524d +0x3b:  mov    %ebx,0x18(%esp)
084c5251 +0x3f:  mov    %esi,0x14(%esp)
084c5255 +0x43:  movl   $0x0,0x10(%esp)
084c525d +0x4b:  movl   $0x0,0xc(%esp)
084c5265 +0x53:  movl   $0x0,0x8(%esp)
084c526d +0x5b:  movl   $0x0,0x4(%esp)
084c5275 +0x63:  mov    %eax,(%esp)
084c5278 +0x66:  call   086c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>  ; GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)
084c527d +0x6b:  mov    $0x0,%eax
084c5282 +0x70:  add    $0x40,%esp
084c5285 +0x73:  pop    %ebx
084c5286 +0x74:  pop    %esi
084c5287 +0x75:  pop    %ebp
084c5288 +0x76:  ret
084c5289 +0x77:  nop
```

## 反编译 C

```c
// Inter_Notice::dispatch_sig @ 0x84c5212

/* Inter_Notice::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Notice::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  
  cVar1 = *(char *)(param_3 + 0x51);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::send_chat_msg(pGVar2,0,0,0,0,param_3 + 1,(int)cVar1,0,0,0xc);
  return 0;
}
```
