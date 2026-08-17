# stStackableBooster_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## tag2EndType

```asm
// === 089c295a stStackableBooster_t::tag2EndType  [0x089c295a-0x89c2a80] ===
 89c295a:	55                   	push   %ebp
 89c295b:	89 e5                	mov    %esp,%ebp
 89c295d:	83 ec 18             	sub    $0x18,%esp
 89c2960:	c7 44 24 04 c6 9e e1 	movl   $0x8e19ec6,0x4(%esp)
 89c2967:	08 
 89c2968:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c296b:	89 04 24             	mov    %eax,(%esp)
 89c296e:	e8 6d bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c2973:	85 c0                	test   %eax,%eax
 89c2975:	75 0a                	jne    89c2981 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x27>
 89c2977:	b8 00 00 00 00       	mov    $0x0,%eax
 89c297c:	e9 fe 00 00 00       	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2981:	c7 44 24 04 d0 9e e1 	movl   $0x8e19ed0,0x4(%esp)
 89c2988:	08 
 89c2989:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c298c:	89 04 24             	mov    %eax,(%esp)
 89c298f:	e8 4c bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c2994:	85 c0                	test   %eax,%eax
 89c2996:	75 0a                	jne    89c29a2 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x48>
 89c2998:	b8 01 00 00 00       	mov    $0x1,%eax
 89c299d:	e9 dd 00 00 00       	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c29a2:	c7 44 24 04 e2 9e e1 	movl   $0x8e19ee2,0x4(%esp)
 89c29a9:	08 
 89c29aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c29ad:	89 04 24             	mov    %eax,(%esp)
 89c29b0:	e8 2b bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c29b5:	85 c0                	test   %eax,%eax
 89c29b7:	75 0a                	jne    89c29c3 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x69>
 89c29b9:	b8 02 00 00 00       	mov    $0x2,%eax
 89c29be:	e9 bc 00 00 00       	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c29c3:	c7 44 24 04 ea 9e e1 	movl   $0x8e19eea,0x4(%esp)
 89c29ca:	08 
 89c29cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c29ce:	89 04 24             	mov    %eax,(%esp)
 89c29d1:	e8 0a bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c29d6:	85 c0                	test   %eax,%eax
 89c29d8:	75 0a                	jne    89c29e4 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x8a>
 89c29da:	b8 03 00 00 00       	mov    $0x3,%eax
 89c29df:	e9 9b 00 00 00       	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c29e4:	c7 44 24 04 f6 9e e1 	movl   $0x8e19ef6,0x4(%esp)
 89c29eb:	08 
 89c29ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c29ef:	89 04 24             	mov    %eax,(%esp)
 89c29f2:	e8 e9 ba 6b ff       	call   807e4e0 <strcmp@plt>
 89c29f7:	85 c0                	test   %eax,%eax
 89c29f9:	75 07                	jne    89c2a02 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0xa8>
 89c29fb:	b8 04 00 00 00       	mov    $0x4,%eax
 89c2a00:	eb 7d                	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2a02:	c7 44 24 04 03 9f e1 	movl   $0x8e19f03,0x4(%esp)
 89c2a09:	08 
 89c2a0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2a0d:	89 04 24             	mov    %eax,(%esp)
 89c2a10:	e8 cb ba 6b ff       	call   807e4e0 <strcmp@plt>
 89c2a15:	85 c0                	test   %eax,%eax
 89c2a17:	75 07                	jne    89c2a20 <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0xc6>
 89c2a19:	b8 05 00 00 00       	mov    $0x5,%eax
 89c2a1e:	eb 5f                	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2a20:	c7 44 24 04 10 9f e1 	movl   $0x8e19f10,0x4(%esp)
 89c2a27:	08 
 89c2a28:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2a2b:	89 04 24             	mov    %eax,(%esp)
 89c2a2e:	e8 ad ba 6b ff       	call   807e4e0 <strcmp@plt>
 89c2a33:	85 c0                	test   %eax,%eax
 89c2a35:	75 07                	jne    89c2a3e <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0xe4>
 89c2a37:	b8 06 00 00 00       	mov    $0x6,%eax
 89c2a3c:	eb 41                	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2a3e:	c7 44 24 04 17 9f e1 	movl   $0x8e19f17,0x4(%esp)
 89c2a45:	08 
 89c2a46:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2a49:	89 04 24             	mov    %eax,(%esp)
 89c2a4c:	e8 8f ba 6b ff       	call   807e4e0 <strcmp@plt>
 89c2a51:	85 c0                	test   %eax,%eax
 89c2a53:	75 07                	jne    89c2a5c <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x102>
 89c2a55:	b8 07 00 00 00       	mov    $0x7,%eax
 89c2a5a:	eb 23                	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2a5c:	c7 44 24 04 2b 9f e1 	movl   $0x8e19f2b,0x4(%esp)
 89c2a63:	08 
 89c2a64:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2a67:	89 04 24             	mov    %eax,(%esp)
 89c2a6a:	e8 71 ba 6b ff       	call   807e4e0 <strcmp@plt>
 89c2a6f:	85 c0                	test   %eax,%eax
 89c2a71:	75 07                	jne    89c2a7a <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x120>
 89c2a73:	b8 08 00 00 00       	mov    $0x8,%eax
 89c2a78:	eb 05                	jmp    89c2a7f <_ZN20stStackableBooster_t11tag2EndTypeEPKc+0x125>
 89c2a7a:	b8 09 00 00 00       	mov    $0x9,%eax
 89c2a7f:	c9                   	leave
 89c2a80:	c3                   	ret

```

```c
// stStackableBooster_t::tag2EndType @ 0x89c295a

/* stStackableBooster_t::tag2EndType(char const*) */

undefined4 __thiscall stStackableBooster_t::tag2EndType(stStackableBooster_t *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"[/avatar]");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"[/special avatar]");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"[/cera]");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"[/creature]");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"[/equipment]");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"[/stackable]");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"[/etc]");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"[/special creature]");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"[/emblem]");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    uVar2 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

```

---

## tag2Type

```asm
// === 089c2832 stStackableBooster_t::tag2Type  [0x089c2832-0x89c2959] ===
 89c2832:	55                   	push   %ebp
 89c2833:	89 e5                	mov    %esp,%ebp
 89c2835:	83 ec 18             	sub    $0x18,%esp
 89c2838:	c7 44 24 04 71 9e e1 	movl   $0x8e19e71,0x4(%esp)
 89c283f:	08 
 89c2840:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2843:	89 04 24             	mov    %eax,(%esp)
 89c2846:	e8 95 bc 6b ff       	call   807e4e0 <strcmp@plt>
 89c284b:	85 c0                	test   %eax,%eax
 89c284d:	75 0a                	jne    89c2859 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x27>
 89c284f:	b8 00 00 00 00       	mov    $0x0,%eax
 89c2854:	e9 fe 00 00 00       	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c2859:	c7 44 24 04 7a 9e e1 	movl   $0x8e19e7a,0x4(%esp)
 89c2860:	08 
 89c2861:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2864:	89 04 24             	mov    %eax,(%esp)
 89c2867:	e8 74 bc 6b ff       	call   807e4e0 <strcmp@plt>
 89c286c:	85 c0                	test   %eax,%eax
 89c286e:	75 0a                	jne    89c287a <_ZN20stStackableBooster_t8tag2TypeEPKc+0x48>
 89c2870:	b8 01 00 00 00       	mov    $0x1,%eax
 89c2875:	e9 dd 00 00 00       	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c287a:	c7 44 24 04 8b 9e e1 	movl   $0x8e19e8b,0x4(%esp)
 89c2881:	08 
 89c2882:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2885:	89 04 24             	mov    %eax,(%esp)
 89c2888:	e8 53 bc 6b ff       	call   807e4e0 <strcmp@plt>
 89c288d:	85 c0                	test   %eax,%eax
 89c288f:	75 0a                	jne    89c289b <_ZN20stStackableBooster_t8tag2TypeEPKc+0x69>
 89c2891:	b8 02 00 00 00       	mov    $0x2,%eax
 89c2896:	e9 bc 00 00 00       	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c289b:	c7 44 24 04 83 5f e1 	movl   $0x8e15f83,0x4(%esp)
 89c28a2:	08 
 89c28a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c28a6:	89 04 24             	mov    %eax,(%esp)
 89c28a9:	e8 32 bc 6b ff       	call   807e4e0 <strcmp@plt>
 89c28ae:	85 c0                	test   %eax,%eax
 89c28b0:	75 0a                	jne    89c28bc <_ZN20stStackableBooster_t8tag2TypeEPKc+0x8a>
 89c28b2:	b8 03 00 00 00       	mov    $0x3,%eax
 89c28b7:	e9 9b 00 00 00       	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c28bc:	c7 44 24 04 92 9e e1 	movl   $0x8e19e92,0x4(%esp)
 89c28c3:	08 
 89c28c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c28c7:	89 04 24             	mov    %eax,(%esp)
 89c28ca:	e8 11 bc 6b ff       	call   807e4e0 <strcmp@plt>
 89c28cf:	85 c0                	test   %eax,%eax
 89c28d1:	75 07                	jne    89c28da <_ZN20stStackableBooster_t8tag2TypeEPKc+0xa8>
 89c28d3:	b8 04 00 00 00       	mov    $0x4,%eax
 89c28d8:	eb 7d                	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c28da:	c7 44 24 04 9e 9e e1 	movl   $0x8e19e9e,0x4(%esp)
 89c28e1:	08 
 89c28e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c28e5:	89 04 24             	mov    %eax,(%esp)
 89c28e8:	e8 f3 bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c28ed:	85 c0                	test   %eax,%eax
 89c28ef:	75 07                	jne    89c28f8 <_ZN20stStackableBooster_t8tag2TypeEPKc+0xc6>
 89c28f1:	b8 05 00 00 00       	mov    $0x5,%eax
 89c28f6:	eb 5f                	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c28f8:	c7 44 24 04 2c 8e e1 	movl   $0x8e18e2c,0x4(%esp)
 89c28ff:	08 
 89c2900:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2903:	89 04 24             	mov    %eax,(%esp)
 89c2906:	e8 d5 bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c290b:	85 c0                	test   %eax,%eax
 89c290d:	75 07                	jne    89c2916 <_ZN20stStackableBooster_t8tag2TypeEPKc+0xe4>
 89c290f:	b8 06 00 00 00       	mov    $0x6,%eax
 89c2914:	eb 41                	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c2916:	c7 44 24 04 aa 9e e1 	movl   $0x8e19eaa,0x4(%esp)
 89c291d:	08 
 89c291e:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2921:	89 04 24             	mov    %eax,(%esp)
 89c2924:	e8 b7 bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c2929:	85 c0                	test   %eax,%eax
 89c292b:	75 07                	jne    89c2934 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x102>
 89c292d:	b8 07 00 00 00       	mov    $0x7,%eax
 89c2932:	eb 23                	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c2934:	c7 44 24 04 bd 9e e1 	movl   $0x8e19ebd,0x4(%esp)
 89c293b:	08 
 89c293c:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c293f:	89 04 24             	mov    %eax,(%esp)
 89c2942:	e8 99 bb 6b ff       	call   807e4e0 <strcmp@plt>
 89c2947:	85 c0                	test   %eax,%eax
 89c2949:	75 07                	jne    89c2952 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x120>
 89c294b:	b8 08 00 00 00       	mov    $0x8,%eax
 89c2950:	eb 05                	jmp    89c2957 <_ZN20stStackableBooster_t8tag2TypeEPKc+0x125>
 89c2952:	b8 09 00 00 00       	mov    $0x9,%eax
 89c2957:	c9                   	leave
 89c2958:	c3                   	ret
 89c2959:	90                   	nop

```

```c
// stStackableBooster_t::tag2Type @ 0x89c2832

/* stStackableBooster_t::tag2Type(char const*) */

undefined4 __thiscall stStackableBooster_t::tag2Type(stStackableBooster_t *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"[avatar]");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"[special avatar]");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"[cera]");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"[creature]");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"[equipment]");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"[stackable]");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"[etc]");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"[special creature]");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"[emblem]");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    uVar2 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

```

