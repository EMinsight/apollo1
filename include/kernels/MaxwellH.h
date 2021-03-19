#pragma once

#include "MaxwellBase.h"
#include "MaterialProperty.h"

class MaxwellH : public MaxwellBase
{
public:
  static InputParameters validParams();

  MaxwellH(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual() override;
  virtual Real computeQpJacobian() override;

  const MaterialProperty<Real> & _rho;
  const MaterialProperty<Real> & _mu;
};
