# dispatch_sig

`_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CharacterStatistic` | `0x082051d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082051d0  _ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)
# range [0x082051d0, 0x082053e5]
082051d0 +0x000:  push   %ebp
082051d1 +0x001:  mov    %esp,%ebp
082051d3 +0x003:  sub    $0x38,%esp
082051d6 +0x006:  mov    0xc(%ebp),%eax
082051d9 +0x009:  mov    %eax,(%esp)
082051dc +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082051e1 +0x011:  cmp    $0x2,%eax
082051e4 +0x014:  setle  %al
082051e7 +0x017:  test   %al,%al
082051e9 +0x019:  je     082051f5 <+0x25>
082051eb +0x01b:  mov    $0x0,%eax
082051f0 +0x020:  jmp    082053e4 <+0x214>
082051f5 +0x025:  lea    -0x20(%ebp),%eax
082051f8 +0x028:  mov    %eax,0x4(%esp)
082051fc +0x02c:  mov    0x10(%ebp),%eax
082051ff +0x02f:  mov    %eax,(%esp)
08205202 +0x032:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08205207 +0x037:  xor    $0x1,%eax
0820520a +0x03a:  test   %al,%al
0820520c +0x03c:  je     08205237 <+0x67>
0820520e +0x03e:  movl   $0x0,0xc(%esp)
08205216 +0x046:  movl   $0x0,0x8(%esp)
0820521e +0x04e:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205226 +0x056:  movl   $0x9d1f,(%esp)
0820522d +0x05d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205232 +0x062:  jmp    082053e4 <+0x214>
08205237 +0x067:  lea    -0x20(%ebp),%eax
0820523a +0x06a:  add    $0x8,%eax
0820523d +0x06d:  mov    %eax,0x4(%esp)
08205241 +0x071:  mov    0x10(%ebp),%eax
08205244 +0x074:  mov    %eax,(%esp)
08205247 +0x077:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820524c +0x07c:  xor    $0x1,%eax
0820524f +0x07f:  test   %al,%al
08205251 +0x081:  je     0820527c <+0xac>
08205253 +0x083:  movl   $0x0,0xc(%esp)
0820525b +0x08b:  movl   $0x0,0x8(%esp)
08205263 +0x093:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820526b +0x09b:  movl   $0x9d20,(%esp)
08205272 +0x0a2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205277 +0x0a7:  jmp    082053e4 <+0x214>
0820527c +0x0ac:  lea    -0x20(%ebp),%eax
0820527f +0x0af:  add    $0xc,%eax
08205282 +0x0b2:  mov    %eax,0x4(%esp)
08205286 +0x0b6:  mov    0x10(%ebp),%eax
08205289 +0x0b9:  mov    %eax,(%esp)
0820528c +0x0bc:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08205291 +0x0c1:  xor    $0x1,%eax
08205294 +0x0c4:  test   %al,%al
08205296 +0x0c6:  je     082052c1 <+0xf1>
08205298 +0x0c8:  movl   $0x0,0xc(%esp)
082052a0 +0x0d0:  movl   $0x0,0x8(%esp)
082052a8 +0x0d8:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082052b0 +0x0e0:  movl   $0x9d21,(%esp)
082052b7 +0x0e7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082052bc +0x0ec:  jmp    082053e4 <+0x214>
082052c1 +0x0f1:  lea    -0x20(%ebp),%eax
082052c4 +0x0f4:  add    $0x4,%eax
082052c7 +0x0f7:  mov    %eax,0x4(%esp)
082052cb +0x0fb:  mov    0x10(%ebp),%eax
082052ce +0x0fe:  mov    %eax,(%esp)
082052d1 +0x101:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082052d6 +0x106:  xor    $0x1,%eax
082052d9 +0x109:  test   %al,%al
082052db +0x10b:  je     08205306 <+0x136>
082052dd +0x10d:  movl   $0x0,0xc(%esp)
082052e5 +0x115:  movl   $0x0,0x8(%esp)
082052ed +0x11d:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082052f5 +0x125:  movl   $0x9d22,(%esp)
082052fc +0x12c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205301 +0x131:  jmp    082053e4 <+0x214>
08205306 +0x136:  lea    -0x20(%ebp),%eax
08205309 +0x139:  add    $0x10,%eax
0820530c +0x13c:  mov    %eax,0x4(%esp)
08205310 +0x140:  mov    0x10(%ebp),%eax
08205313 +0x143:  mov    %eax,(%esp)
08205316 +0x146:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820531b +0x14b:  xor    $0x1,%eax
0820531e +0x14e:  test   %al,%al
08205320 +0x150:  je     0820534b <+0x17b>
08205322 +0x152:  movl   $0x0,0xc(%esp)
0820532a +0x15a:  movl   $0x0,0x8(%esp)
08205332 +0x162:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820533a +0x16a:  movl   $0x9d23,(%esp)
08205341 +0x171:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205346 +0x176:  jmp    082053e4 <+0x214>
0820534b +0x17b:  lea    -0x20(%ebp),%eax
0820534e +0x17e:  add    $0x14,%eax
08205351 +0x181:  mov    %eax,0x4(%esp)
08205355 +0x185:  mov    0x10(%ebp),%eax
08205358 +0x188:  mov    %eax,(%esp)
0820535b +0x18b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08205360 +0x190:  xor    $0x1,%eax
08205363 +0x193:  test   %al,%al
08205365 +0x195:  je     0820538d <+0x1bd>
08205367 +0x197:  movl   $0x0,0xc(%esp)
0820536f +0x19f:  movl   $0x0,0x8(%esp)
08205377 +0x1a7:  movl   $&_ZZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820537f +0x1af:  movl   $0x9d24,(%esp)
08205386 +0x1b6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820538b +0x1bb:  jmp    082053e4 <+0x214>
0820538d +0x1bd:  mov    -0x20(%ebp),%edx
08205390 +0x1c0:  mov    0xc(%ebp),%eax
08205393 +0x1c3:  mov    %edx,0x8e03c(%eax)
08205399 +0x1c9:  mov    -0x18(%ebp),%edx
0820539c +0x1cc:  mov    0xc(%ebp),%eax
0820539f +0x1cf:  mov    %edx,0x8e044(%eax)
082053a5 +0x1d5:  mov    -0x14(%ebp),%edx
082053a8 +0x1d8:  mov    0xc(%ebp),%eax
082053ab +0x1db:  mov    %edx,0x8e048(%eax)
082053b1 +0x1e1:  mov    -0x1c(%ebp),%edx
082053b4 +0x1e4:  mov    0xc(%ebp),%eax
082053b7 +0x1e7:  mov    %edx,0x8e040(%eax)
082053bd +0x1ed:  mov    -0x10(%ebp),%edx
082053c0 +0x1f0:  mov    0xc(%ebp),%eax
082053c3 +0x1f3:  mov    %edx,0x8e04c(%eax)
082053c9 +0x1f9:  mov    -0xc(%ebp),%edx
082053cc +0x1fc:  mov    0xc(%ebp),%eax
082053cf +0x1ff:  mov    %edx,0x8e050(%eax)
082053d5 +0x205:  mov    0xc(%ebp),%eax
082053d8 +0x208:  movb   $0x1,0x8e074(%eax)
082053df +0x20f:  mov    $0x0,%eax
082053e4 +0x214:  leave
082053e5 +0x215:  ret
```

## 反编译 C

```c
// Dispatcher_CharacterStatistic::dispatch_sig @ 0x82051d0

/* Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CharacterStatistic::dispatch_sig
          (Dispatcher_CharacterStatistic *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [3];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = PacketBuf::get_int(param_2,&local_24);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_18);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&local_20);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_14);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,local_10);
              if (cVar1 == '\x01') {
                *(int *)(param_1 + 0x8e03c) = local_24;
                *(int *)(param_1 + 0x8e044) = local_1c;
                *(int *)(param_1 + 0x8e048) = local_18;
                *(int *)(param_1 + 0x8e040) = local_20;
                *(int *)(param_1 + 0x8e04c) = local_14;
                *(int *)(param_1 + 0x8e050) = local_10[0];
                param_1[0x8e074] = (CUser)0x1;
                uVar3 = 0;
              }
              else {
                uVar3 = LineFunc(0x9d24,
                                 "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9d23,
                               "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9d22,
                             "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x9d21,
                           "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x9d20,
                         "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x9d1f,
                       "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
