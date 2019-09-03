Qf2 = Qf*Qf; Qf3 = Qf2 * Qf; Qf4 = Qf3 * Qf;

theta2mfg34 = Cf*g34*(2.4722222222222223 + lnbar2T + 
      1.6666666666666667*lnbarT);
 
theta2mfg32 = Cf*g32*(-0.46875*(3.*g2 + gp2) + 2.25*g2*lnbarW + 
      1.125*(g2 + gp2)*lnbarZ + 3.*gp2*(-1.4166666666666667 + lnbarZ)*Qf*
       (I3f + Qf*(-1. + W/Z)));
 
theta2mfg30 = (3.75*h2 + IhWW*(-1.*h - 2.*W) + 72.95833333333333*W2 - 
      4.*lnbarh*lnbarW*W2 + I0hW*(2.*h + 2.*W - (4.*W2)/h) - (10.*W3)/h + 
      I3f*Qf3*WmZ2*(-500. + (432.*W)/Z) + (19.5*W3)/Z + 
      43.708333333333336*W*Z + (W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
       ((-3.75*eightWm5Z2)/((4.*T - 1.*Z)*Z) - (720.*Z)/(h - 4.*Z)) + 
      Qf4*WmZ3*(-250./Z + (182.*W)/Z2) + 
      lnbar2h*(0.75*h2 + (8.*h2*(W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/Z2) + 
      lnbarh*lnbarZ*((W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
         (-64. - (4.*h)/Z + (192.*Z)/(-1.*h + 4.*Z) - (8.*h2)/Z2) - 2.*Z2) + 
      (7.5*W4)/Z2 - 7.760416666666667*Z2 + 
      lnbarh*(-3.*h2 + 4.*W2 + (W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
         (112. - (8.*h)/Z + (384.*Z)/(h - 4.*Z) - (8.*h2)/Z2) + 2.*Z2) + 
      IhZZ*(-0.5*h - 1.*Z + (W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
         (-32./Z + 48./(-1.*h + 4.*Z) + (4.*h)/Z2 - (8.*h2)/Z3)) + 
      I0hZ*(h + Z - (2.*Z2)/h + (W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
         (-16./h + 28./Z + (4.*h)/Z2 + (8.*h2)/Z3)) + 
      I0WZ*(9.*W + (6.*W2)/Z + 3.*Z + I3f*Qf*WmZ2*(24./W + 32./Z + 
          (40.*W)/Z2) + (3.*W3)/Z2 - (3.*Z2)/W + 
        Qf2*WmZ2*(-12./W + 4./Z + (4.*W)/Z2 - (44.*W2)/Z3)) + 
      lnbarT*lnbarZ*(-222.66666666666666*I3f*Qf*T*W + 144.*I3f*Qf*W2 + 
        (469.3333333333333*I3f*Qf*T*W2)/Z - (64.*I3f*Qf*W3)/Z + 
        9.333333333333334*I3f*Qf*T*Z - 105.*I3f*Qf*W*Z - 
        (1.*eightWm5Z2*(W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/
         ((4.*T - 1.*Z)*Z) - (256.*I3f*Qf*T*W3)/Z2 + 25.*I3f*Qf*Z2 + 
        Qf2*WmZ2*(-25. - (9.333333333333334*T)/Z + (80.*W)/Z + 
          (320.*T*W)/Z2 - (64.*W2)/Z2 - (426.6666666666667*T*W2)/Z3)) + 
      lnbarW*lnbarZ*(15.*W2 + (3.*W3)/Z + 3.*W*Z + I3f*Qf*(W - 1.*Z)*
         (48.*W + (104.*W2)/Z - 24.*Z + (288.*W3)/Z2) - 3.*Z2 + 
        Qf2*WmZ2*(-12. + (12.*W)/Z + (52.*W2)/Z2 + (480.*W3)/Z3)) + 
      I3f*Qf*(W - 1.*Z)*(-12.*h + 115.66666666666667*T - 
        174.66666666666666*W + (8.*h2)/Z - (46.666666666666664*T2)/Z - 
        (186.66666666666666*T*W)/Z + (733.3333333333334*W2)/Z - 203.25*Z + 
        (1066.6666666666667*T2*W)/Z2 + (64.*T*W2)/Z2 - (12.*W3)/Z2 - 
        (40.*Z2)/h - (60.*Z2)/W - (1280.*T2*W2)/Z3 + (1440.*W4)/Z3) - 
      (5.*Z3)/h - (7.5*Z3)/W + lnbar2Z*(-4.5*W2 + (144.*I3f*Qf3*WmZ3)/Z + 
        3.*W*Z + (48.*(W - 1.*Z)*Z*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/(h - 4.*Z) + 
        Qf2*WmZ2*(-99.33333333333333 + (8.*h)/Z - (8.*Z)/h - (6.*Z)/W + 
          (213.33333333333334*W2)/Z2) + (72.*Qf4*WmZ4)/Z2 + 3.5*Z2 + 
        I3f*Qf*(W - 1.*Z)*(8.*h + 117.33333333333333*W - 105.33333333333333*
           Z - (8.*Z2)/h - (12.*Z2)/W) - (1.*Z3)/h - (1.5*Z3)/W) + 
      lnbarZ*(3.*W2 + I3f*Qf3*WmZ2*(288. - (240.*W)/Z) - (3.*W3)/Z - 
        37.5*W*Z + (W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z)*
         ((2.*eightWm5Z2)/((4.*T - 1.*Z)*Z) + (192.*Z)/(h - 4.*Z)) + 
        Qf4*WmZ3*(144./Z - (96.*W)/Z2) - 2.75*Z2 + Qf2*(W - 1.*Z)*
         (8.*h - 217.*W - (8.*h2)/Z - (8.*h*W)/Z + (1470.6666666666667*W2)/
           Z - 177.*Z + (32.*W*Z)/h + (8.*h2*W)/Z2 - (1070.6666666666667*W3)/
           Z2 - (32.*Z2)/h - (24.*Z2)/W) + I3f*Qf*(W - 1.*Z)*
         (-8.*h - 94.*W + (8.*h2)/Z - (472.*W2)/Z + 225.*Z + (32.*Z2)/h + 
          (48.*Z2)/W) + (4.*Z3)/h + (6.*Z3)/W) + 
      ITTZ*((-1.*eightWm5Z2*(W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/
         ((4.*T - 1.*Z)*Z2) + I3f*Qf*(-1.*W + Z)*(-20.333333333333332 + 
          (9.333333333333334*T)/Z - (26.666666666666668*W)/Z - 
          (213.33333333333334*T*W)/Z2 + (64.*W2)/Z2 + (256.*T*W2)/Z3) + 
        Qf2*WmZ2*(20.333333333333332/Z - (9.333333333333334*T)/Z2 + 
          (80.*W)/Z2 + (320.*T*W)/Z3 - (149.33333333333334*W2)/Z3 - 
          (426.6666666666667*T*W2)/Z4)) + 
      lnbar2T*((0.25*eightWm5Z2*(W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/
         ((4.*T - 1.*Z)*Z) + I3f*Qf*(W - 1.*Z)*(25.*T - 20.*W - 
          (9.333333333333334*T2)/Z - (80.*T*W)/Z + (16.*W2)/Z + 6.25*Z + 
          (213.33333333333334*T2*W)/Z2 + (64.*T*W2)/Z2 - (256.*T2*W2)/Z3) + 
        Qf2*WmZ2*(6.25 + (25.*T)/Z - (20.*W)/Z - (9.333333333333334*T2)/Z2 - 
          (80.*T*W)/Z2 + (58.666666666666664*W2)/Z2 + (320.*T2*W)/Z3 + 
          (64.*T*W2)/Z3 - (426.6666666666667*T2*W2)/Z4)) + 
      lnbarT*((eightWm5Z2*(W - 1.*Z)*(Qf2*(W - 1.*Z) + I3f*Qf*Z))/
         ((4.*T - 1.*Z)*Z) + I3f*Qf*(W - 1.*Z)*(9.333333333333334*T - 80.*W + 
          (37.333333333333336*T2)/Z - (533.3333333333334*T*W)/Z + 
          (64.*W2)/Z + 25.*Z - (853.3333333333334*T2*W)/Z2 + (768.*T*W2)/Z2 + 
          (1024.*T2*W2)/Z3) + Qf2*WmZ2*(25. + (9.333333333333334*T)/Z - 
          (80.*W)/Z + (37.333333333333336*T2)/Z2 - (960.*T*W)/Z2 + 
          (135.11111111111111*W2)/Z2 - (1280.*T2*W)/Z3 + 
          (1450.6666666666667*T*W2)/Z3 + (1706.6666666666667*T2*W2)/Z4)) + 
      IWWZ*(I3f*Qf*(W - 1.*Z)*(28. + (16.*W)/Z + (64.*W2)/Z2 + 
          (288.*W3)/Z3) + Qf2*WmZ2*(4./Z + (8.*W)/Z2 + (432.*W2)/Z3 + 
          (480.*W3)/Z4)) + lnbar2W*(-2.*W2 - (2.*W3)/h + (1.5*W3)/Z + 
        (1.5*W4)/Z2 + I3f*Qf*(W - 1.*Z)*((-40.*W2)/Z - (60.*W3)/Z2 + 
          (288.*W4)/Z3) + Qf2*WmZ2*((-184.*W2)/Z2 + (170.*W3)/Z3 + 
          (480.*W4)/Z4)) + lnbarW*(-13.*W2 + (8.*W3)/h - (15.*W3)/Z - 
        1.5*W*Z - (6.*W4)/Z2 + 3.*Z2 + I3f*Qf*(W - 1.*Z)*
         (-36.*W + (168.*W2)/Z + 24.*Z - (912.*W3)/Z2 - (1152.*W4)/Z3) + 
        Qf2*(W - 1.*Z)*(18.*W + (122.*W2)/Z - 12.*Z + (2436.*W3)/Z2 - 
          (680.*W4)/Z3 - (1920.*W5)/Z4)) + Qf2*(W - 1.*Z)*
       (12.*h - 115.66666666666667*T + 505.0833333333333*W - (8.*h2)/Z + 
        (46.666666666666664*T2)/Z - (12.*h*W)/Z + (195.66666666666666*T*W)/
         Z - (1591.4814814814815*W2)/Z + 122.75*Z - (40.*W*Z)/h + 
        (8.*h2*W)/Z2 - (1646.6666666666667*T2*W)/Z2 + 
        (26.666666666666668*T*W2)/Z2 - (373.85185185185185*W3)/Z2 + 
        (40.*Z2)/h + (30.*Z2)/W + (3733.3333333333335*T2*W2)/Z3 - 
        (106.66666666666667*T*W3)/Z3 - (1070.*W4)/Z3 - 
        (2133.3333333333335*T2*W3)/Z4 + (2400.*W5)/Z4) + 
      (1.5*h2 - 18.*W2 - (4.*W3)/h + (3.*W3)/Z - (224.*I3f*Qf3*WmZ3)/Z + 
        6.*W*Z + (3.*W4)/Z2 - (112.*Qf4*WmZ4)/Z2 + 4.5*Z2 + 
        I3f*Qf*(W - 1.*Z)*(234.66666666666666*W + (16.*h2)/Z - (48.*W2)/Z - 
          242.66666666666666*Z + (40.*W3)/Z2 - (16.*Z2)/h - (24.*Z2)/W) + 
        Qf2*WmZ2*(-294.6666666666667 - (16.*Z)/h - (12.*Z)/W + (16.*h2)/Z2 + 
          (474.6666666666667*W2)/Z2 - (44.*W3)/Z3) - (2.*Z3)/h - (3.*Z3)/W)*
       Zeta2)/v4;